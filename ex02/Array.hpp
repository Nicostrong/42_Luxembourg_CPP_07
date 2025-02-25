/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:26:48 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 12:48:25 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

# define RESET		"\033[0m"
# define RED		"\033[31m"

template < typename T >
class	Array
{
	private:

		T		*_array;
		size_t	_size;

	public:

		/*	Canonical form	*/
		Array( void );
		Array( size_t n );
		Array( Array const &src_object );
		~Array( void );

		Array	&operator=( Array const &src_object );

		/*	Method	*/
		size_t	size( void ) const;
		T		&operator[]( size_t index );
		const T	&operator[]( size_t index ) const;

		/*	Exception	*/
		class OutOfLimits : public std::exception
		{

			public:

				virtual const char	*what() const throw();

		};
};

# include "Array.tpp"

#endif
