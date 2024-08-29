/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:35:45 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:59:19 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		//HumanA::HumanA(const HumanA& humana);
		//HumanA&	HumanA::operator=(const HumanA& humana);
		~HumanA(void);

		void	attack();
	private:
		std::string	_name;
		Weapon		_weapon;
} ;
