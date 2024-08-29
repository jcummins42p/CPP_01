/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:46 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:54:06 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << _name << " enters the fray, unarmed." << std::endl;
}

//HumanB::HumanB(const HumanB& humanb)
//{
//}

//HumanB&	HumanB::operator=(const HumanB& humanb)
//{
	//if (this != humanb)
		//something
	//return *this;
//}

HumanB::~HumanB(void)
{
	std::cout << "Human of type B ceased to exist" << std::endl;
}
