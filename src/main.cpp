#include <iostream>
#include "Intersection.h"
#include "Car.h"
#include "EmergencyVehicle.h"
#include "TrafficLight.h"

int main() {
    Intersection inter;
    inter.addRule(new TrafficLight(LightState::Red));
    inter.addVehicle(new Car(1,"CAR-111",50));
    inter.addVehicle(new EmergencyVehicle(2,"EMS-999",80));
    inter.simulate();
    return 0;
}
