#include "Car.h"

Car::Car(Engine e, Wheel fl, Wheel fr, Wheel bl, Wheel br, float clearance):
    RoadVehicle(clearance)
{
    engine = e;
    frontLeft = fl;
    frontRight = fr;
    backwardLeft = bl;
    backwardRight = br;
}

std::ostream& Car::print(std::ostream& out) const
{
    out << "Car Engine: " << engine.getPower() 
        << " Wheels: " 
        << frontLeft.getRadius() << " " << frontRight.getRadius() << " "
        << backwardLeft.getRadius() << " " << backwardRight.getRadius() << " "
        << "Ride height: " << clearance;
    return out;
}

