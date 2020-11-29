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
    string make;
    int year;
    int mileage;
    double price;

    //constructor

public:
    Vehicle(const string &make, int year, int mileage, double price);

    const string &getMake() const;

    int getYear() const;

    int getMileage() const;

    double getPrice() const;

    void setMake(const string &make);

    void setYear(int year);

    void setMileage(int mileage);

    void setPrice(double price);
    void displayInfo(Vehicle any);
};


#endif //INHERITANCE_VEHICLE_H
