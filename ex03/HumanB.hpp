/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:35:45 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:59:47 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	HumanB
{
	public:
		HumanB(std::string name);
		//HumanB::HumanB(const HumanB& humana);
		//HumanB&	HumanB::operator=(const HumanB& humana);
		~HumanB(void);

		void	attack();
	private:
		std::string	_name;
		Weapon		weapon;
} ;
