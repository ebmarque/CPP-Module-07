/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:47:44 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/14 15:07:05 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"

// Define ASCII color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define CYAN    "\033[36m"      /* Cyan */

int main(void)
{
	std::cout << GREEN << "\n\n------ Creating array with diferent sizes and of diferent sizes and types ------" \
			  << RESET << std::endl;
	::Array<int> empty(0);
	::Array<int> integer(5);
	::Array<char> character(3);
	::Array<bool> booleans(2);
	::Array<float> floatingPoints(10);

	std::cout << CYAN << "\n\n------ Empty Array ------" \
			  << RESET << std::endl;
	
	try
	{

		std::cout << YELLOW << "empty[" << 0 << "]: " << empty[0] << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "[OK]" << RESET << ": Exception caught succefully -> " \
				  << BLUE << e.what() << RESET << std::endl;
	}
	
	std::cout << CYAN << "\n\n------ Integer Array ------" \
			  << RESET << std::endl;
	for (unsigned int i = 0; i < integer.size(); i++)
	{
		std::cout << YELLOW << "integer[" << i << "]: " << integer[i] << RESET << std::endl;
	}

	std::cout << CYAN << "\n\n------ Character Array ------" \
			  << RESET << std::endl;
	for (unsigned int i = 0; i < character.size(); i++)
	{
		std::cout << YELLOW << "character[" << i << "]: " << character[i] << RESET << std::endl;
	}

	std::cout << CYAN << "\n\n------ booleans Array ------" \
			  << RESET << std::endl;
	for (unsigned int i = 0; i < booleans.size(); i++)
	{
		std::cout << YELLOW << "booleans[" << i << "]: " << booleans[i] << RESET << std::endl;
	}

	std::cout << CYAN << "\n\n------ Floating Points Array ------" \
			  << RESET << std::endl;
	for (unsigned int i = 0; i < floatingPoints.size(); i++)
	{
		std::cout << YELLOW << "floatingPoints[" << i << "]: " << floatingPoints[i] << RESET << std::endl;
	}
	
	std::cout << GREEN << "\n\n------ testing the overload of [] operator ------" \
			  << RESET << std::endl;
	std::cout << CYAN << "\n\n------ changing indexes 1 and 3 of the integer array ------" \
			  << RESET << std::endl;
	integer[1] = 42;
	integer[3] = 42;
	std::cout << CYAN << "\n\t------ New values at Integer Array ------\n" \
			  << RESET << std::endl;
	for (unsigned int i = 0; i < integer.size(); i++)
	{
		std::cout << YELLOW << "integer[" << i << "]: " << integer[i] << RESET << std::endl;
	}
	
	
	std::cout << GREEN << "\n\n------ testing put of range exception ------" \
			  << RESET << std::endl;
	std::cout << RED << "Integer[10]: " << RESET << std::endl;
	try
	{
		integer[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "[OK]" << RESET << ": Exception caught succefully -> " \
				  << BLUE << e.what() << RESET << std::endl;
	}
}