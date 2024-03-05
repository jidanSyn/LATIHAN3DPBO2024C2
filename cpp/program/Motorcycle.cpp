#pragma once

#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle
{
private:
    string type;
    unsigned int fuel_capacity;

public:
    // Constructor
    Motorcycle(const string &number_plate, const string &brand, const string &production_year, const string &color, const string &type, unsigned int fuel_capacity)
        : Vehicle(number_plate, brand, production_year, color), type(type), fuel_capacity(fuel_capacity) {}

    // Getter for type
    string get_type()
    {
        return type;
    }

    // Setter for type
    void set_type(string &type)
    {
        this->type = type;
    }

    // Getter for fuel_capacity
    unsigned int get_fuel_capacity()
    {
        return fuel_capacity;
    }

    // Setter for fuel_capacity
    void set_fuel_capacity(unsigned int fuel_capacity)
    {
        this->fuel_capacity = fuel_capacity;
    }
};
