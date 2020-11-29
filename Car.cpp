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
void displayInfo(Vehicle &any){
    Car car;

    cout<<any.getManufact()<<endl;
    cout<<any.getYear()<<endl;
    cout<<car.getDoors()<<endl;


}
