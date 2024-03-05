#pragma once

#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle
{
private:
    unsigned int no_seats;
    unsigned int no_doors;

public:
    // Constructor
    Car(const string &number_plate, const string &brand, const string &production_year, const string &color, unsigned int no_seats, unsigned int no_doors)
        : Vehicle(number_plate, brand, production_year, color), no_seats(no_seats), no_doors(no_doors) {}

    // Getter for no_seats
    unsigned int get_no_seats() const
    {
        return no_seats;
    }

    // Setter for no_seats
    void set_no_seats(unsigned int no_seats)
    {
        this->no_seats = no_seats;
    }

    // Getter for no_doors
    unsigned int get_no_doors() const
    {
        return no_doors;
    }

    // Setter for no_doors
    void set_no_doors(unsigned int no_doors)
    {
        this->no_doors = no_doors;
    }
};
