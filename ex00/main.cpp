/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 16:58:05 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = newZombie("Kevin");	// heap/dynamic allocated zombie pointer
	a->announce();

	Zombie b = Zombie("Denethor");	// stack allocation local zombie
	b.announce();

	{
		Zombie c("Summer");	// stack allocate local to this scope
		c.announce();
	}						// c goes out of scope and is destroyed here

	randomChump("Gurprute");	// another stack allocation within function

	delete a;

	return (0);				// b is the last to be destroyed as it leaves scope
}
