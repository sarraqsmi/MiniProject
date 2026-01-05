#pragma once
class Vehicle;
class TrafficElement {
public:
    virtual bool allows(const Vehicle&) const = 0;
    virtual void printRule() const;
};
