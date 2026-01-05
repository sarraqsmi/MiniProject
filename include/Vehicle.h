#pragma once
#include <string>
#include <iostream>
class TrafficElement;

class Vehicle {
protected:
    int id;
    std::string plate;
    int speed;
    static int totalVehicles;
public:
    Vehicle(int id, std::string plate, int speed = 0);
    virtual ~Vehicle();
    virtual bool canMove(const TrafficElement&) const = 0;
    virtual void move();
    virtual void printStatus() const;
    static int getTotalVehicles();
};
