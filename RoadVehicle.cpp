#include "RoadVehicle.h"

RoadVehicle::RoadVehicle(float clearance): Vehicle(), clearance(clearance)
{
}

std::ostream& RoadVehicle::print(std::ostream& out) const
{
	out << " It's just a road vehicle with clearance = " << clearance;
	return out;
}