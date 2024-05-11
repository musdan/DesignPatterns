#ifndef _MOUNTAIN_BIKE_H_
#define _MOUNTAIN_BIKE_H_
#include <string>
#include "Bike.h"


class MountainBike : public Bike {
    public:
        MountainBike(string bsize);
        void getBikeDetails();
        int getHeight();
    private:
        int height;
};

#endif
