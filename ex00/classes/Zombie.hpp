/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:12:45 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 16:12:45 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>
# include <new>

//Zombie class
class Zombie {
	private:
		std::string name;

	public:
		//constructor
		Zombie(std::string _name);
		//destructor
		~Zombie();
		//announce
		void	announce(void);

};

//New zombie function
Zombie* newZombie(std::string name);
//random chump
void	randomChump(std::string name);

#endif
