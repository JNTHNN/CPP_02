/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:44:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/03 09:22:22 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int	_fractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator=(Fixed const &fixed);
		Fixed(const int itofp);
		Fixed(const float ftofp);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// bool	greaterThan(Fixed const &compared);
		static float min(Fixed &a, Fixed &b);
		static float max(Fixed &a, Fixed &b);

		/* COMPARAISON OPERATOR */
		bool	operator>(Fixed const &compared) const;
		bool	operator<(Fixed const &compared) const;
		bool	operator>=(Fixed const &compared) const;
		bool	operator<=(Fixed const &compared) const;
		bool	operator==(Fixed const &compared) const;
		bool	operator!=(Fixed const &compared) const;

		/*	ARYMETHIC OPERATOR	*/
		Fixed	operator+(Fixed const &add) const;
		Fixed	operator-(Fixed const &add) const;
		Fixed	operator*(Fixed const &add) const;
		Fixed	operator/(Fixed const &add) const;


};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);



#endif