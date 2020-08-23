/*
 * Vehicle.h
 *
 *  Created on: 21 рту. 2020 у.
 *      Author: gherman.ts
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>

class Vehicle
{
public:
	Vehicle() {};
    virtual ~Vehicle(){};
	friend std::ostream& operator<<(std::ostream& out, const Vehicle& v);

private:
	virtual std::ostream& print(std::ostream& out) const = 0;
};

#endif // !VEHICLE_H_

