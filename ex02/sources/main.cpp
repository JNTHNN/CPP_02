/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:26:55 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/03 09:37:35 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed 		a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		b(15.15f);
	Fixed		c(19.6f);

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	// std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << c + b << std::endl;
	std::cout << c - b << std::endl;
	std::cout << 19.6f - 15.15f << std::endl;
	std::cout << c - b << std::endl;
	std::cout << 19 - 15 << std::endl;
	std::cout << c * b << std::endl;
	std::cout << c / b << std::endl;
	std::cout << 19.6f / 15.15f << std::endl;

	return 0;
}
