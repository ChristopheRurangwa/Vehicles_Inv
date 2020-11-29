//
// Created by Christophe Rurangwa on 11/29/20.
//

#include "Vehicle.h"



const string &Vehicle::getManufact() const {
    return manufact;
}

void Vehicle::setManufact(const string &manufact) {
    Vehicle::manufact = manufact;
}

int Vehicle::getYear() const {
    return year;
}

void Vehicle::setYear(int year) {
    Vehicle::year = year;
}

 void displayInfo(Vehicle anyVehicle) {

        cout << anyVehicle.getManufact() << endl;
        cout << anyVehicle.getYear() << endl;
    }
