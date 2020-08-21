/*
 * car.cpp
 *
 *  Created on: 21 рту. 2020 у.
 *      Author: gherman.ts
 */

#ifndef CAR_H_
#define CAR_H_

#include "RoadVehicle.h"
#include "VehicleParts.h"

class Car : public RoadVehicle
{
public:
	Car(Engine e, Wheel fl, Wheel fr, Wheel bl, Wheel br, float clearance);

private:
	Engine engine;
	Wheel frontLeft, frontRight;
	Wheel backwardLeft, backwardRight;

	std::ostream& print(std::ostream& out) const override;
};

#endif // !CAR_H_



