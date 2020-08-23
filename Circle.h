/*
 * Circle.h
 *
 *  Created on: 22 рту. 2020 у.
 *      Author: gherman.ts
 */


#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "RoadVehicle.h"
#include "Vector.h"

class Circle : public RoadVehicle
{
public:
	Circle(Vector centr, float clearance);
	~Circle() override {};
private:
	std::ostream& print(std::ostream& out) const override;

	Vector centrPoint;
};

#endif
