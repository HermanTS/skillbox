/*
 * Vehicle.cpp
 *
 *  Created on: 21 ���. 2020 �.
 *      Author: gherman.ts
 */


#include "Vehicle.h"

std::ostream& operator<<(std::ostream& out, const Vehicle& v)
{
	return v.print(out);
}