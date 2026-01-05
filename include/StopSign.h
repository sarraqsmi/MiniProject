#pragma once
#include "TrafficElement.h"
class StopSign : public TrafficElement {
public:
    bool allows(const Vehicle&) const override;
};
