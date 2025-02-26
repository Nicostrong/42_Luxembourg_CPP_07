/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:27:00 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 10:26:42 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void	printArray( Array<T> &arr )
{
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	return ;
}

int		main( void )
{
	try
	{
		Array<int>	intArray(5);

		for (size_t i = 0; i < intArray.size(); i++)
			intArray[i] = static_cast<int>(i * 10);

		std::cout << "Integer Array: ";
		printArray(intArray);

		try
		{
			std::cout << "We try to acces at index 10 of intArray." << std::endl;
			std::cout << intArray[10] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		Array<std::string>	strArray(3);
		strArray[0] = "Hello";
		strArray[1] = "42";
		strArray[2] = "World";

		std::cout << "String Array: ";
		printArray(strArray);

		Array<std::string>	copyArray = strArray;
		std::cout << "Copied Array: ";
		printArray(copyArray);

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}