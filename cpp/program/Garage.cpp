#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Motorcycle.cpp"
#include "Car.cpp"

using namespace std;

class Garage
{
private:
    string name;
    int area;
    vector<Motorcycle> motorcycles;
    vector<Car> cars;

public:
    // Constructor
    Garage(const string &name, int area) : name(name), area(area) {}

    // Getter for name
    string get_name() const
    {
        return name;
    }

    // Setter for name
    void set_name(const string &name)
    {
        this->name = name;
    }

    // Getter for area
    int get_area() const
    {
        return area;
    }

    // Setter for area
    void set_area(int area)
    {
        this->area = area;
    }

    // Method to add a motorcycle to the Garage
    void add_motorcycle(Motorcycle &motorcycle)
    {
        motorcycles.push_back(motorcycle);
    }

    // Method to add a car to the Garage
    void add_car(Car &car)
    {
        cars.push_back(car);
    }

    // Method to display all motorcycles
    void display_motorcycles()
    {
        for (auto &motorcycle : motorcycles)
        {
            cout << "Motorcycle: " << motorcycle.get_type() << ", Number Plate: " << motorcycle.get_number_plate() << endl;
            // Assuming get_type() and get_number_plate() are methods in the Motorcycle class
            // You can add more details as needed
        }
    }

    // Method to display all cars
    void display_cars()
    {
        for (auto &car : cars)
        {
            cout << "Car: " << car.get_brand() << ", Number Plate: " << car.get_number_plate() << endl;
            // Assuming get_brand() and get_number_plate() are methods in the Car class
            // You can add more details as needed
        }
    }
};
