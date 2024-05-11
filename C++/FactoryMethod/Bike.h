#ifndef _BIKE_H_
#define _BIKE_H_

/**
 * Author: Basith Salman
 * email: basiths@gmail.com
 * 
 * Description: This is the abstract class of the "Product" (
 * as stated in the Design Patterns by GoF)
 * to instantiate concrete Product instances.
 *
**/

#include <string>

using namespace std;



class Bike {
    protected: 
        string size;

    public:
        
        virtual void getBikeDetails() =0;
};

#endif