/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:26:15 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/08 14:26:54 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>

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

//Zombie use function
Zombie* newZombie(std::string name);

#endif
