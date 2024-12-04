/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:26:55 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/04 22:15:52 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed	a = Fixed(1) + Fixed(2);
	// Fixed	b;
	// // Test des opérateurs de décrémentation
	// std::cout << "Decrémentations (pré et post) sur b :" << std::endl;
	// std::cout << "Pré-décrémentation : " << --a << std::endl;
	// std::cout << "Post-décrémentation : " << a-- << std::endl;
	// std::cout << "Valeur après post-décrémentation : " << a << std::endl;

	// // Test des opérateurs arithmétiques
	// Fixed c = Fixed(10) + Fixed(20);
	// Fixed d = Fixed(42) - Fixed(15);
	// Fixed e = Fixed(3) * Fixed(2);
	// Fixed f = Fixed(15) / Fixed(3);

	// std::cout << "Addition : 10 + 20 = " << c << std::endl;
	// std::cout << "Soustraction : 42 - 15 = " << d << std::endl;
	// std::cout << "Multiplication : 3 * 2 = " << e << std::endl;
	// std::cout << "Division : 15 / 3 = " << f << std::endl;

	// // Comparaisons
	// if (c > d)
	// 	std::cout << c << " est plus grand que " << d << std::endl;
	// else
	// 	std::cout << c << " n'est pas plus grand que " << d << std::endl;

	// if (c != f)
	// 	std::cout << c << " est différent de " << f << std::endl;

	// // Min et Max
	// std::cout << "Min entre c et d : " << Fixed::min(c, d) << std::endl;
	// std::cout << "Max entre c et d : " << Fixed::max(c, d) << std::endl;

	return 0;
}
