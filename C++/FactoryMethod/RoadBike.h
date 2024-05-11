#ifndef _ROAD_BIKE_H_
#define  _ROAD_BIKE_H_

#include <string>
#include "Bike.h"


class RoadBike : public Bike {
    public:
        RoadBike(string bsize);
        void getBikeDetails();
    private:
        int height;
};

#endif