#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    string number_plate;
    string brand;
    string production_year;
    string color;

public:
    // ructor
    Vehicle(const string &number_plate, const string &brand, const string &production_year, const string &color)
        : number_plate(number_plate), brand(brand), production_year(production_year), color(color) {}

    // Getter for number_plate
    string get_number_plate()
    {
        return number_plate;
    }

    // Setter for number_plate
    void set_number_plate(string &number_plate)
    {
        this->number_plate = number_plate;
    }

    // Getter for brand
    string get_brand()
    {
        return brand;
    }

    // Setter for brand
    void set_brand(string &brand)
    {
        this->brand = brand;
    }

    // Getter for production_year
    string get_production_year()
    {
        return production_year;
    }

    // Setter for production_year
    void set_production_year(string &production_year)
    {
        this->production_year = production_year;
    }

    // Getter for color
    string get_color()
    {
        return color;
    }

    // Setter for color
    void set_color(string &color)
    {
        this->color = color;
    }
};
