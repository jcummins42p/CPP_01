/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:26:22 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 16:41:21 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name);
		Zombie(const Zombie& zombie);
		Zombie& operator=(const Zombie& zombie);
		~Zombie(void);

		void announce(void);
	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
