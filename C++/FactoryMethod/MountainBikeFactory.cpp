/**********
 * Author: Basith Salman
 * email: basiths@gmail.com
 * 
 * This is a C++ implementation of the PHP "Abstract Factory Pattern" that I 
 * had checked in sometime back. Since C++ has pointers, this demonstrates
 * the use of virtual function polymophism used to implement this pattern
 * unlike PHP which does not have pointers.
 * 
 * This is a complete Project that can be compiled and run with the tasks.json  settings
 * of a Visual Studio code IDE.
 *
 *
********/

#include <iostream>

#include "BikeFactory.h"

#include "MountainBike.h"
#include "MountainBikeFactory.h"



/*****
 *  Can change the signature of the MakeBike() funciton
 *  to take size of the bike as argument and let the 
 *  client call MakeBike with the size to create a bicycle
 *  it wants..
 * 
*****/

MountainBike * MountainBikeFactory::MakeBike() 
{
    MountainBike *Mb = new MountainBike("Medium");
    return Mb;
}

