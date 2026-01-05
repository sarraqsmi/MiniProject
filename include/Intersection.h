#pragma once
#include <vector>
#include "Vehicle.h"
#include "TrafficElement.h"
class Intersection {
    std::vector<Vehicle*> vehicles;
    std::vector<TrafficElement*> rules;
public:
    void addVehicle(Vehicle*);
    void addRule(TrafficElement*);
    void simulate();
};
