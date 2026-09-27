/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:24:04 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 22:24:04 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
//definitions
# define HUMANB_CPP
//includes
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		HumanB(std::string _name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack(void);
};


#endif
