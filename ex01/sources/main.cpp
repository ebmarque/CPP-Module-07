/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:25:38 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/14 02:54:18 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Template.hpp"
#include <iostream>
#include <string>


int main(void)
{
	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float numbersf[10] = {0.1f, 1.1f, 2.1f, 3.1f, 4.1f, 5.1f, 6.1f, 7.1f, 8.1f, 9.1f};
	
	::iter(numbers, 10, func);
	::iter(numbersf, 10, func);
	

	std::cout << "------- TEST WITH AN INTEGER ARRAY -------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]: " << numbers[i] << std::endl;
	}

	
	std::cout << "\n\n------- TEST WITH AN FLOAT ARRAY -------" << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "numberf[" << i << "]: " << numbersf[i] << std::endl;
	}
	
	
	
	return (0);
}
