#ifndef _ROAD_BIKE_FACTORY_H_
#define _ROAD_BIKE_FACTORY_H_

#include <iostream>
#include "RoadBike.h"
#include "BikeFactory.h"


class RoadBikeFactory: public BikeFactory {
    public:
        Bike * MakeBike() override;
};

#endif