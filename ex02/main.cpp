/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:46:53 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 18:16:33 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	//print addresses
	std::cout << "Address of the string: " << &brain << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;
	
	//print content
	std::cout << "Content of the string: " << brain << std::endl;
	std::cout << "content pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Content pointed to by stringREF: " << stringREF << std::endl;
	
	return 0;
}
