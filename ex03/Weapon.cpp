/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:55:00 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/03 18:18:57 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << _type << " materialized." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << _type << " breaks." << std::endl;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string const &Weapon::getType()
{
	return _type;
}
