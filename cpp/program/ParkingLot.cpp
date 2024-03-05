#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Motorcycle.cpp"
#include "Car.cpp"

using namespace std;

class ParkingLot
{
private:
    int capacity;
    int num_motors;
    int num_cars;
    vector<Motorcycle> motorcycles;
    vector<Car> cars;

public:
    // Constructor
    ParkingLot(int capacity) : capacity(capacity), num_motors(0), num_cars(0) {}

    // Method to add a motorcycle to the parking lot
    void add_motorcycle(Motorcycle &motorcycle)
    {
        if (num_motors < capacity)
        {
            motorcycles.push_back(motorcycle);
            num_motors++;
        }
        else
        {
            cout << "Parking lot is full. Cannot add motorcycle." << endl;
        }
    }

    // Method to add a car to the parking lot
    void add_car(Car &car)
    {
        if (num_motors + num_cars < capacity)
        {
            cars.push_back(car);
            num_cars++;
        }
        else
        {
            cout << "Parking lot is full. Cannot add car." << endl;
        }
    }

       // Method to get the number of motorcycles in the parking lot
    int get_num_motors()
    {
        return num_motors;
    }

    // Method to get the number of cars in the parking lot
    int get_num_cars()
    {
        return num_cars;
    }

    // Method to get the total capacity of the parking lot
    int get_capacity()
    {
        return capacity;
    }

    // Method to get the current number of vehicles in the parking lot
    int get_current_vehicles()
    {
        return num_motors + num_cars;
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
