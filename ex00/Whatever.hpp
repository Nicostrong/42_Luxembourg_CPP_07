/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:38:39 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 10:00:42 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/*
 *	template to swap two values
 */
template <typename T>
void	swap( T &a, T &b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
	return ;
}

/*
 *	template to return the minimum value
 */
template <typename T>
T		min( T a, T b )
{
	return (a < b ? a : b);
}

/*
 *	template to return the maximum value
 */
template <typename T>
T		max( T a, T b )
{
	return (a > b ? a : b);
}

#endif
