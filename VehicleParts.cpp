#include "VehicleParts.h"

Engine& Engine::operator=(Engine& other)
{
    power = other.getPower();
    return *this;
}

Wheel& Wheel::operator=(Wheel& other)
{
    radius = other.getRadius();
    return *this;
}
