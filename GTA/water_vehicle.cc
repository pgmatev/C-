#include "water_vehicle.hh"
#include <iostream>

void WaterVehicle::accelerate(){
    float change = displacement/weight;
    speed+=acceleration*change;
    std::cout << "The vehicle accelerated on water!" << std::endl;
}