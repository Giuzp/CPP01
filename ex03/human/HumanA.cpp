/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:02:57 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 22:02:57 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor
HumanA::HumanA(std::string _name, Weapon& _weapon) : name(_name), weapon(_weapon) {}

//destructor
HumanA::~HumanA() {}

//Attack
void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}