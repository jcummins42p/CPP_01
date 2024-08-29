/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:26:15 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 16:48:23 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
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
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
