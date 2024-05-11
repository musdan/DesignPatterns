#ifndef _BIKE_FACTORY_H_
#define _BIKE_FACTORY_H_
#include "Bike.h"

class BikeFactory {
    private:
    public:
        virtual Bike * MakeBike() = 0;
};

#endif