#pragma once
#include "TrafficElement.h"
enum class LightState { Red, Green };
class TrafficLight : public TrafficElement {
    LightState state;
public:
    TrafficLight(LightState s);
    bool allows(const Vehicle&) const override;
};
