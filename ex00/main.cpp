/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:38:56 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 09:54:41 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int	main( void )
{
	int	a = 2;
	int	b = 3;

	std::cout << "Before swap calling:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After swap calling:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "Before swap calling:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}