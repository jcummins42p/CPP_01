/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:25:59 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 18:59:35 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const &type	getType(void);
		void		setType(std::string newtype);
	private:
		std::string	_type;
} ;
