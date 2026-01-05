#pragma once
#include "Vehicle.h"
class EmergencyVehicle : public Vehicle {
public:
    EmergencyVehicle(int id, std::string plate, int speed = 0);
    bool canMove(const TrafficElement&) const override;
};
