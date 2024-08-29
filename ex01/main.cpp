/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 17:46:28 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	int horde_size = 0;

	Zombie *horde = zombieHorde(horde_size, "Corey");

	for (int i = 0; i < horde_size; i++)
		horde[i].announce();

	delete[] horde;
	return (0);				// b is the last to be destroyed as it leaves scope
}
