/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:20:47 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/14 02:45:28 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T, typename S>
void iter(T *t, S s, void(*f)(T&))
{
	for (S i = 0; i < s; i++)
	{
		f(t[i]);
	}
}

template<typename T>
void	func(T &t)
{
	t *= 2;
}

#endif // TEMPLATE_HPP