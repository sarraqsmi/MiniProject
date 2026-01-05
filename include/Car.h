#pragma once
#include "Vehicle.h"
class Car : public Vehicle {
public:
    Car(int id, std::string plate, int speed = 0);
    bool canMove(const TrafficElement&) const override;
};
