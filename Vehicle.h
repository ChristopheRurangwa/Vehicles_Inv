//
// Created by Christophe Rurangwa on 11/29/20.
//

#ifndef INHERITANCE_VEHICLE_H
#define INHERITANCE_VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

class Vehicle {

    //member variables

private:
    string manufact;
    int year;


    //constructor

public:
    Vehicle(){
        manufact="";
        year=0;
    }

    Vehicle( int year,string manufact){
        manufact=manufact;
        year=year;


    }

    const string &getManufact() const;

    void setManufact(const string &manufact);

    int getYear() const;

    void setYear(int year);

   void displayInfo(Vehicle &any); //allows polymorphism
};


#endif //INHERITANCE_VEHICLE_H
