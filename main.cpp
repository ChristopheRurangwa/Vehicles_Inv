
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
    string manufac;
    int year;



    cout<< "Vehicle Program\n\n";
    cout<< "Vehicle: "<<endl;
    cout<<"Enter the manufacturer: ";getline(cin,manufac);cout<<"\n";
    cout<<"Enter the year built: ";cin>>year;cout<<"\n";
    cout<<"Vehicle Information: "<<endl;

    cout<<"Manufacturer: "<<manufac;cout<<endl;
    cout<<"Year Built: "<<year;cout<<endl;

    Vehicle (year,manufac);

    return 0;
}
