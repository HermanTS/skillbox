/*
 * VehicleParts.h
 *
 *  Created on: 21 рту. 2020 у.
 *      Author: gherman.ts
 */

#ifndef VEHICLE_PARTS_H__
#define VEHICLE_PARTS_H__

class Wheel
{
public:
	Wheel() : radius(0) {};
	Wheel(float radius) :radius(radius) {};
	float getRadius() const { return radius; };

	Wheel& operator=(Wheel& other);
private:
	float radius;
};

class Engine
{
public:
	Engine() :power(0) {};
	Engine(float power) :power(power) {};
	float getPower() const { return power; };

	Engine& operator=(Engine& other);
private:
	float power;
};


#endif // !VEHICLEPARTS_H__
