/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:57:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/04 16:28:40 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::_debug(void)
{
	std::cout	<<
		"\t[DEBUG] I like your shirt."
				<< std::endl;
}

void	Harl::_info(void)
{
	std::cout	<<
		"\t[INFO] I wish I had a shirt like that..."
				<< std::endl;
}

void	Harl::_warning(void)
{
	std::cout	<<
		"\t[WARNING] Actually, I would like that shirt in particular..."
				<< std::endl;
}

void	Harl::_error(void)
{
	std::cout << "\t[ERROR] RIGHT I'M TAKING YOUR SHIRT!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4]
		= {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*complaint[4])(void)
		= {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int	i = -1;

	while (++i < 4)
		if (levels[i] == level)
			break;

	switch (i) {
		case 0:
			(this->*complaint[0])();
		case 1:
			(this->*complaint[1])();
		case 2:
			(this->*complaint[2])();
		case 3:
			(this->*complaint[3])();
	}
	std::cout << "\tAnnoyed muttering, becoming inaudible..." << std::endl;
}
