//
// Created by Christophe Rurangwa on 11/29/20.
//

#ifndef INHERITANCE_TRUCK_H
#define INHERITANCE_TRUCK_H
#include "Vehicle.h"

using namespace std;
class Truck: public Vehicle {
private:
    double maxTowing;
public:
    Truck():Vehicle(){
        maxTowing=0;
    }
    Truck( int maxTowing){
       maxTowing=0;
    }

    double getMaxTowing() const;

    void setMaxTowing(double maxTowing);

    void displayInfo(Truck any);
};

#endif //INHERITANCE_TRUCK_H
