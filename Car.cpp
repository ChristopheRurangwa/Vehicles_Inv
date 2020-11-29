//
// Created by Christophe Rurangwa on 11/29/20.
//

#include "Car.h"
#include <iostream>

using namespace std;


int Car::getDoors() const {
    return doors;
}

void Car::setDoors(int doors) {
    Car::doors = doors;
}
void Car::displayInfo(Car &any){


    cout<<"Manufacturer: "<<any.getManufact()<<endl;
    cout<<"Year Built: "<<any.getYear()<<endl;
    cout<<"Doors: "<<any.getDoors()<<endl;


}
