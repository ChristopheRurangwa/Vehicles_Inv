//
// Created by Christophe Rurangwa on 11/29/20.
//

#include "Vehicle.h"

Vehicle::Vehicle(const string &make, int year, int mileage, double price) : make(make), year(year), mileage(mileage),
                                                                            price(price) {}

const string &Vehicle::getMake() const {
    return make;
}

int Vehicle::getYear() const {
    return year;
}

int Vehicle::getMileage() const {
    return mileage;
}

double Vehicle::getPrice() const {
    return price;

}

void Vehicle::setMake(const string &make) {
    Vehicle::make = make;
}

void Vehicle::setYear(int year) {
    Vehicle::year = year;
}

void Vehicle::setMileage(int mileage) {
    Vehicle::mileage = mileage;
}

void Vehicle::setPrice(double price) {
    Vehicle::price = price;
}
void Vehicle::displayInfo(Vehicle anyVehicle) {

    cout<<anyVehicle.getMake()<<endl;
    cout<<anyVehicle.getYear()<<endl;
    cout<<anyVehicle.getMileage()<<endl;
    cout<<anyVehicle.getPrice()<<endl;

}