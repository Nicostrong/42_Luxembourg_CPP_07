/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:39:13 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 15:36:11 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor
 */
template < typename T >
Array<T>::Array( void ) : _array(NULL), _size(0)
{
	return ;
}

/*
 *	Constructor with papameter
 */
template < typename T >
Array<T>::Array( size_t n ) : _array(new T[n]), _size(n)
{
	return ;
}

/*
 *	Copy constructor
 */
template < typename T >
Array<T>::Array( Array const &src_object ) : _array(NULL), _size(0)
{
	*this = src_object;
	return ;
}

/*
 *	Destructor
 */
template < typename T >
Array<T>::~Array( void )
{
	delete[] _array;
	return ;
}

/*
 *	Assignment constructor
 */
template < typename T >
Array<T>	&Array<T>::operator=( Array const &src_object )
{
	if (this != &src_object)
	{
		delete[] _array;
		_size = src_object._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = src_object._array[i];
	}
	return (*this);
}

/*******************************************************************************
 *								METHOD										   *
 ******************************************************************************/

 /*
  *	return the size of array
  */
template < typename T >
size_t	Array<T>::size( void ) const
{
	return (this->_size);
}

/*******************************************************************************
 *							   OPERATOR 									   *
 ******************************************************************************/

/*
 *	Overload operator [] for access to the element of array
 */
template < typename T >
T		&Array<T>::operator[]( size_t index )
{
	if (index >= _size)
		throw Array<T>::OutOfLimits();
	return (_array[index]);
}

/*
 *	Overload operator [] for access to the element of array
 */
template < typename T >
const T	&Array<T>::operator[]( size_t index ) const
{
	if (index >= _size)
		throw Array<T>::OutOfLimits();
	return (_array[index]);
}

/*******************************************************************************
 *								EXCEPTION									   *
 ******************************************************************************/

 /*
  *	Exception when index out of limits
  */
template < typename T >
const char	*Array<T>::OutOfLimits::what() const throw()
{
	return (RED "Index out of limits" RESET);
}