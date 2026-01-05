#pragma once
#include "Vehicle.h"
class Bus : public Vehicle {
public:
    Bus(int id, std::string plate, int speed = 0);
    bool canMove(const TrafficElement&) const override;
};
