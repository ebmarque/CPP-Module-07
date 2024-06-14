/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:45:59 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/14 14:40:42 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>


template<typename T>
class Array 
{

	public:

		unsigned int	lenght;
		T 				*arr;

		
		Array() : lenght(0), arr(new T[0]()){};
		Array(unsigned int n) : lenght(n), arr(new T[n]()) {};
		~Array() {delete[] this->arr;};
		
		Array(const Array& other)
		{
			this->lenght = other.lenght;
			this->arr = new T[other.lenght];
			for (unsigned int i = 0; i < other.lenght; i++)
			{
				this->arr[i] = other.arr[i];
			}
			
		};
		
		Array& operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] this->arr;
				this->lenght = other.lenght;
				this->arr = new T[other.lenght];
				for (unsigned int i = 0; i < other.lenght; i++)
				{
					this->arr[i] = other.arr[i];
				}
			}
			return (*this);
		};
		
		unsigned int	size(void) const
		{
			return (this->lenght);
		};

		T& operator[](unsigned int index)
		{
			if (index >= this->lenght)
			{
				throw std::out_of_range("Array index out of bounds!");
			}
			return (this->arr[index]);
		};		
};


#endif // ARRAY_HPP