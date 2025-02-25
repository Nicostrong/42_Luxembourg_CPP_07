/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:58:46 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 10:59:41 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

// Fonction simple qui affiche un élément
template <typename T>
void	printElement( T const &elem )
{
    std::cout << elem << " ";
	return ;
}

int	main( void )
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string strArr[] = {"Hello", "World", "42"};

	std::cout << "Array int: ";
	iter(arr, 5, printElement);
	std::cout << std::endl;

	std::cout << "Array string: ";
	iter(strArr, 3, printElement);
	std::cout << std::endl;

	return (0);
}