/*
 * bicycle.h
 *
 *  Created on: 22 рту. 2020 у.
 *      Author: gherman.ts
 */

#ifndef BICYCLE_H_
#define BICYCLE_H_

#include "RoadVehicle.h"
#include "VehicleParts.h"
class Bicycle : public RoadVehicle
{
public:
	Bicycle(Wheel front, Wheel rear, float clearance);
	~Bicycle() override {};
private:
	Wheel front;
	Wheel rear;

	std::ostream& print(std::ostream& out) const override;
};

#endif

