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
#include "MountainBike.h"

MountainBike::MountainBike(string size) {
    if(size == "Medium") {
        height = 1001;
    }
    else if (size == "Small") {
        height = 50;
    }
    else if( size == "Large") {
        height = 150;
    }
    else {
        throw ("Invalid size of the bicycle..");
    }
    size = size;
    
}

void MountainBike::getBikeDetails() {
    cout << "Type: MountainBike, Size: " <<  size << "Height: " << height << endl;
}

int MountainBike::getHeight() {
    return height;
}