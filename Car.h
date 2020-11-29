//
// Created by Christophe Rurangwa on 11/29/20.
//

#ifndef INHERITANCE_CAR_H
#define INHERITANCE_CAR_H


class Car {
private:
    int doors;
public:
    Car(int doors);

    int getDoors() const;

    void setDoors(int doors);
};


#endif //INHERITANCE_CAR_H
