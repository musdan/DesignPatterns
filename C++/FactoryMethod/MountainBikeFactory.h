/**********
 * Author: Basith Salman
 * email: basiths@gmail.com
 * 
 * This is a C++ implementation of the PHP "Abstract Factory Pattern" that I 
 * had checked in sometime back. Since C++ has pointers, this demonstrates
 * the use of virtual function polymophism use to implement this pattern
 * unlike PHP which does not have pointers.
 * 
 * This is a complete Project that cam be compiled and run with the tasks.json  settings
 * of a Visual Studio code.
 *
 *
********/


#ifndef _MOUNTAIN_BIKE_FACTORY_H_
#define _MOUNTAIN_BIKE_FACTORY_H_
#include "MountainBike.h"
#include "Bike.h"
#include "BikeFactory.h"

class MountainBikeFactory: public BikeFactory {

    public:
        MountainBike * MakeBike() override;
};

#endif