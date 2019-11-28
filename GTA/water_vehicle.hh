#ifndef WATER_VEHICLE_HH
#define WATER_VEHICLE_HH

#include "./vehicle.hh"

class WaterVehicle : public Vehicle {
    protected:
        int displacement;
    public:
        void accelerate();
};

#endif
