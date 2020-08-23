#include "Circle.h"

Circle::Circle(Vector centr, float clearance): RoadVehicle(clearance)
{
	centrPoint = centr;
}

std::ostream& Circle::print(std::ostream& out) const
{
	out << "Circle center: " << centrPoint << " " << "Ride height:" << " " << clearance;

	return out;
}
