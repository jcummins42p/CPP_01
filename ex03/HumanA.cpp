/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:46 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/04 17:08:05 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name),
	_weapon(&weapon)
{
	std::cout 	<< _name << " enters the fray brandishing a "
				<< _weapon->getType() << std::endl;
}

//HumanA::HumanA(const HumanA& humana)
//{
	//_name = humana->name;
	//_weapon = humana->weapon;
	//std::cout 	<< _name << " enters the fray brandishing a "
				//<< _weapon << std::endl;
//}

//HumanA&	HumanA::operator=(const HumanA& humana)
//{
	//if (this != humana)
		//something
	//return *this;
//}

HumanA::~HumanA(void)
{
	std::cout	<< _name << " expires painfully." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout 	<< _name << " swings with "
				<< _weapon->getType()  << std::endl;
}
