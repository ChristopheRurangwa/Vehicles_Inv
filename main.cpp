
/*
 *
Name: Christohe Rurangwa
Date: 11/29/2020
CIS 1202-501

Program Name:Vehicles Program.

Description of what the program does:

Develop a base and derived classes to represent
different types of vehicles.  Then program a short driver to these classes.
Use a source code management tool as you develop this program.
 Commit changes frequently using descriptive commit messages.
 Push your changes to GitHub.
*
 *
*/

#include <iostream>
#include <string>
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"

using namespace std;

int main() {
    Vehicle veh;
    string manufac;
    int year;
    int doors;

    Car car;
    string manufacCar;
    int yearCar;

    Truck tru;
    string manTruc;
    int yearTruc;
    int capacity;


    cout<< "Vehicle Program\n\n";
    cout<< "Vehicle: "<<endl;
    cout<<"Enter the manufacturer: ";getline(cin,manufac);cout<<"\n";
    cout<<"Enter the year built: ";cin>>year;cout<<"\n";
    cout<<"Vehicle Information: "<<endl;
    veh.setManufact(manufac);
    veh.setYear(year);
    Vehicle (year,manufac);
    veh.displayInfo(veh);

    cout<< "Car: "<<endl;
    cout<<"Enter the manufacturer: ";cin>>manufacCar;cout<<"\n";
    cout<<"Enter the year built: ";cin>>yearCar;cout<<"\n";
    cout<<"Number of doors: ";cin>>doors;cout<<"\n";
    cout<<"Vehicle Information: "<<endl;
    car.setManufact(manufacCar);
    car.setYear(yearCar);
    car.setDoors(doors);
    Car(car.getDoors());//stores door number
    Vehicle(yearCar,manufacCar);
    car.displayInfo(car);

    cout<< "Truck: "<<endl;
    cout<<"Enter the manufacturer: ";(cin>>manTruc);cout<<"\n";
    cout<<"Enter the year built: ";cin>>yearTruc;cout<<"\n";
    cout<<"Enter the towing capacity: ";cin>>capacity;cout<<endl;
    cout<<"Vehicle Information: "<<endl;
    tru.setManufact(manTruc);
    tru.setYear(yearTruc);
    tru.setMaxTowing(capacity);
    Vehicle (year,manufac);
    Truck(tru.getMaxTowing());//store towing capacity
    veh.displayInfo(tru);


    return 0;
}
