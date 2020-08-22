/*
 * bicycle.cpp
 *
 *  Created on: 22 рту. 2020 у.
 *      Author: gherman.ts
 */

#include "Bicycle.h"

Bicycle::Bicycle(Wheel front, Wheel rear, float clearance):
	RoadVehicle(clearance)
{
	this->front = front;
	this->rear = rear;
}

std::ostream& Bicycle::print(std::ostream& out) const
{
	out << "Bicycle Wheels: " << front.getRadius() << " "
		<< rear.getRadius() << " " << "Ride height:" << " " << clearance;

	return out;
}
