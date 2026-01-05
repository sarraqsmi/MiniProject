#pragma once
#include "TrafficElement.h"
class SpeedLimitZone : public TrafficElement {
    int limit;
public:
    SpeedLimitZone(int l);
    bool allows(const Vehicle&) const override;
};
