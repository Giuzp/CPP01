/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:23:41 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 22:24:17 by dcresce          ###   ########.ch       */
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
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}