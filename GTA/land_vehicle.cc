#include "land_vehicle.hh"
#include <iostream>

void LandVehicle::accelerate(){
    float g = -9.8;
    speed += acceleration - weight*g;
    std::cout << "The vehicle just accelerated on land!" << std::endl;
}