/*
 * Fraction.cpp
 *
 *  Created on: 22 ���. 2020 �.
 *      Author: gherman.ts
 */

#include "Fraction.h"
#include <stdexcept>

Fraction::Fraction(int numerator, int denominator)
{
	if (denominator == 0)
		throw std::runtime_error("denominator equal 0");

	this->numerator = numerator;
	this->denominator = denominator;
}
