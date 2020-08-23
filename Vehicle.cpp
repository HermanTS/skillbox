/*
 * Vehicle.cpp
 *
 *  Created on: 21 рту. 2020 у.
 *      Author: gherman.ts
 */


#include "Vehicle.h"

std::ostream& operator<<(std::ostream& out, const Vehicle& v)
{
	return v.print(out);
}