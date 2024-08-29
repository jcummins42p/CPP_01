/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:01:25 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = newZombie("Kevin");	// heap/dynamic allocated zombie pointer
	a->announce();

	{
		Zombie b;
		b.announce();
		b.setname("Jeff");
		b.announce();
	}
	randomChump("Gurprute");	// another stack allocation within function

	delete a;

	return (0);
}
