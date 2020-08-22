/*
 * WaterVehicle.h
 *
 *  Created on: 22 ���. 2020 �.
 *      Author: gherman.ts
 */

#ifndef WATER_VEHICLE_H_
#define WATER_VEHICLE_H_
#include "Vehicle.h"
class WaterVehicle : public Vehicle
{
public:
    WaterVehicle(float draft);

private:
    std::ostream& print(std::ostream& out) const override;

protected:
    float draft;
};

#endif

