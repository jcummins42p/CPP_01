/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:26:15 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 17:41:02 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A corpse claws itself out of the grave..." << std::endl;
}

Zombie::Zombie(const Zombie& zombie)
{
	_name = zombie._name;
}

Zombie& Zombie::operator=(const Zombie& zombie)
{
	if (this != &zombie)
		_name = zombie._name;
	return *this;
}

Zombie::~Zombie(void) {
	std::cout << _name << " shuffles away to plague the living" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	_name = name;
}
