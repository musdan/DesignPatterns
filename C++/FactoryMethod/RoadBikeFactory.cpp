#include <iostream>

#include "RoadBikeFactory.h"

#include "RoadBike.h"

Bike * RoadBikeFactory::MakeBike() {
    return new RoadBike("Small");
};