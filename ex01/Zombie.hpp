/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:26:22 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 17:47:33 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie();
		Zombie(const Zombie& zombie);
		Zombie& operator=(const Zombie& zombie);
		~Zombie(void);

		void	announce(void);
		void	setname(std::string name);
	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif
