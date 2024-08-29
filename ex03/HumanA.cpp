/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:46 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:54:15 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon)
{
	_name = name;
	_weapon = weapon;
	std::cout 	<< _name << " enters the fray brandishing a "
				<< _weapon << std::endl;
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
	std::cout << "Human of type A ceased to exist" << std::endl;
}
