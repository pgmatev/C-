#include "vehicle.hh"
#include <iostream>

void Vehicle::accelerate(){
    speed+=acceleration;
    std::cout << "The vehicle just accelerated" << std::endl;
}