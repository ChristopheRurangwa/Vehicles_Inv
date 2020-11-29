//
// Created by Christophe Rurangwa on 11/29/20.
//

#include "Car.h"


Car::Car(int doors) : doors(doors) {}

int Car::getDoors() const {
    return doors;
}

void Car::setDoors(int doors) {
    Car::doors = doors;
}
