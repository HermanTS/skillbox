/*
 * Vector.cpp
 *
 *  Created on: 16 авг. 2020 г.
 *      Author: iRU
 */

#include "Vector.h"
#include <iostream>
#include <cmath>

Vector::Vector() :x(0), y(0), z(0) {}

Vector::Vector(float x, float y, float z) :x(x), y(y), z(z) {}

Vector::operator float()
{
	return sqrt(x * x + y * y + z * z);
}

float Vector::operator[](int index)
{
	switch(index)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	case 2:
		return z;
		break;
	default:
		std::cout << "Index error: ";
		return 0;
	}
}

Vector operator+(const Vector& a, const Vector& b)
{
	return Vector(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector operator-(const Vector& a, const Vector& b)
{
	return Vector(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector operator*(const Vector& a, int mul)
{
	return Vector(a.x * mul, a.y * mul, a.z * mul);
}

std::ostream& operator<<(std::ostream& out, const Vector& v)
{
	out << v.x << " " << v.y << " " << v.z;
	return out;
}
