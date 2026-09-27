/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:53:47 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 16:53:54 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructors
Zombie::Zombie(std::string _name) : name(_name) {}
Zombie::Zombie() : name("") {}
//destructor
Zombie::~Zombie() {
	std::cout << this->name << ": Destroyed" << std::endl;
}

//Announce
void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Setname
void	Zombie::setname(std::string name) {
	this->name = name;
}