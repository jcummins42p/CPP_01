/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:39:21 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/04 16:27:52 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl		harl;
	std::string input;

	while(std::cout << "Enter debug level 1 - 4 [0 to exit] : ",
			std::cin >> input)
	{
		if (input == "1")
			harl.complain("DEBUG");
		else if (input == "2")
			harl.complain("INFO");
		else if (input == "3")
			harl.complain("WARNING");
		else if (input == "4")
			harl.complain("ERROR");
		else if (input == "0")
			break;
		else
			harl.complain("");
	}
	return (0);
}
