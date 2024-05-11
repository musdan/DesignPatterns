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
#include <string>
#include "RoadBike.h"

RoadBike::RoadBike(string size) {
    if(size == "Medium") {
        height = 300;
    }
    else if (size == "Small") {
        height = 100;
    }
    else if( size == "Large") {
        height = 400;
    }
    else {
        throw ("Invalid size of the bicycle..");
    }
    size = size;
    
}

void RoadBike::getBikeDetails() {
    cout << "Type: RoadBike, Size: " <<  size << "Height: " << height << endl;
}