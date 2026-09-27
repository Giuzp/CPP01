/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:13:22 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 16:13:22 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	//Create a new zombie called pol, and make him announce himself
	Zombie *pol = newZombie("pol");
	if (pol) {
		pol->announce();
		delete pol;
	} else {
		std::cout << "Malloc error!" << std::endl;
	}
	//create a random chump called Francis
	randomChump("Francis");
	return 0;
}