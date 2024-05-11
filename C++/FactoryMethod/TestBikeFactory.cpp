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
// #include "MountainBike.h"
// #include "RoadBike.h"
#include "MountainBikeFactory.h"
#include "RoadBikeFactory.h"


using namespace std;

int main()
{



/****
 * Note that the client program (ie. this code)
 * is de-coupled from the implementation details of the
 * MountainBike class/object..
 * Also further decoupling can be achieved by passing
 * the size of the bike as an argument to MakeBike,
 * Here a "medium" size bike is created..
****/
    cout << "Begin test" << endl;
    BikeFactory *mBf = new MountainBikeFactory();
    Bike *Mbk = mBf->MakeBike();
    Mbk->getBikeDetails();

    BikeFactory *rBf = new RoadBikeFactory();
    Bike *Rbk = rBf->MakeBike();
    Rbk->getBikeDetails();

    cout << "End test."  << endl;

} 