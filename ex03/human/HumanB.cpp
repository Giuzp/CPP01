/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:29:09 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 22:29:09 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constructor
HumanB::HumanB(std::string _name) : name(_name) {
	weapon = NULL;	
}

//destructor
HumanB::~HumanB() {}

//set weapon
void	HumanB::setWeapon(Weapon& _weapon) {
	this->weapon = &_weapon;
}

//Attack
void	HumanB::attack(void) {
	if (this->weapon == NULL) {
		std::cout << this->name << " has no weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}