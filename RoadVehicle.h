/*
 * Vehicle.h
 *
 *  Created on: 21 ���. 2020 �.
 *      Author: gherman.ts
 */

#ifndef ROAD_VEHICLE_H_
#define ROAD_VEHICLE_H_

#include "Vehicle.h"

class RoadVehicle :
    public Vehicle
{
public:
    RoadVehicle(float clearance);

private:
    std::ostream& print(std::ostream& out) const override;

protected:
    float clearance;
};

#endif