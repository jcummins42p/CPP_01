/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:57:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/04 17:15:55 by jcummins         ###   ########.fr       */
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
	std::cout << "I like your shirt." << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I wish I had a shirt like that..." << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "Actually, I would like that shirt in particular..." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "RIGHT I'M TAKING YOUR SHIRT!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*complaint[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
		{
			(this->*complaint[i])();
			return;
		}
	std::cout << "Annoyed muttering, becoming inaudible" << std::endl;
}
