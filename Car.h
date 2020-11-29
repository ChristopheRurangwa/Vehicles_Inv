//
// Created by Christophe Rurangwa on 11/29/20.
//

#ifndef INHERITANCE_CAR_H
#define INHERITANCE_CAR_H


#include "Vehicle.h"
using namespace std;
class Car : public Vehicle {
private:
    int doors;
public:
    Car():Vehicle(){
        doors=0;
    }
    Car(int doors){
        doors=doors;
    };

    int getDoors() const;

    void setDoors(int doors);
    void displayInfo(Car any);
};


#endif //INHERITANCE_CAR_H
