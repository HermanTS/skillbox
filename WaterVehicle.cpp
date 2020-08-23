/*
 * WaterVehicle.cpp
 *
 *  Created on: 22 рту. 2020 у.
 *      Author: gherman.ts
 */

#include "WaterVehicle.h"

WaterVehicle::WaterVehicle(float draft) : Vehicle(), draft(draft)
{
}

std::ostream& WaterVehicle::print(std::ostream& out) const
{
	out << "It's just a water vehicle with draft = " << draft;
	return out;
}
