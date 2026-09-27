/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:03:46 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 17:08:08 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Zombie.hpp"

int	main(void) {
	int zombieNb = 5;

	Zombie* horde = zombieHorde(zombieNb, "Claudio");

	for (int i = 0; i < zombieNb; i++)
		horde[i].announce();

	delete[] horde;
	
	return 0;
}