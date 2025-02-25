/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:58:48 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 11:23:55 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

/*
 *	template to apply a function at each element of an array
 */
template <typename T>
void	iter(T *array, size_t size, void (*func)( T & ))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
	return ;
}

#endif
