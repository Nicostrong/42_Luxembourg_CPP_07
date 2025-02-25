/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:58:46 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 11:22:38 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

//	to print all element of an array
template <typename T>
void	printElement( T &elem )
{
    std::cout << elem << " ";
	return ;
}

//	increment the int value
void	increment( int &n )
{
	n++;
	return ;
}

//	Multiply by 2
void	doubleValue( int &n )
{
	n *= 2;
	return ;
}

int	main( void )
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string strArr[] = {"Hello", "World", "42"};

	std::cout << "Array int: " << std::endl;
	::iter(arr, 5, printElement);
	std::cout << std::endl;

	std::cout << "Increment array int: " << std::endl;
	::iter(arr, 5, increment);
	::iter(arr, 5, printElement);
	std::cout << std::endl;

	std::cout << "Double all value in array int: " << std::endl;
	::iter(arr, 5, doubleValue);
	::iter(arr, 5, printElement);
	std::cout << std::endl;

	std::cout << "Array string: " << std::endl;
	::iter(strArr, 3, printElement);
	std::cout << std::endl;

	return (0);
}