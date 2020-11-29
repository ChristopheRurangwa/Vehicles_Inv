//
// Created by Christophe Rurangwa on 11/29/20.
//

#include "Truck.h"
#include "Vehicle.h"

using namespace std;
double Truck::getMaxTowing() const {
    return maxTowing;
}

void Truck::setMaxTowing(double maxTowing) {
    Truck::maxTowing = maxTowing;
}

void Vehicle::displayInfo(Vehicle &any) {
Truck tck;
    cout<<"Manufacturer: "<<any.getManufact()<<endl;
    cout<<"Year Built: "<<any.getYear()<<endl;
    cout<<"Towing Capacity: "<<tck.getMaxTowing()<<endl;
}

