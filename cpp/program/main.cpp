#pragma once

#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Garage.cpp"

int main()
{
    Garage garage_A = Garage("Garasi A", 100);

    ParkingLot parkiran_upi(500);

    Motorcycle my_motorcycle = Motorcycle("A 123 BC", "Honda", "2019", "Blue", "Automatic", 4);
    Motorcycle a_motorcycle = Motorcycle("B 246 BC", "Honda", "2019", "Black", "Automatic", 4);
    Motorcycle b_motorcycle = Motorcycle("R 222 AA", "Kawasaki", "2019", "Green", "Manual", 6);
    Motorcycle c_motorcycle = Motorcycle("D 2434 ID", "Yamaha", "2019", "Green", "Automatic", 3);

    Car my_car = Car("D 1234 XYZ", "Volkswagen", "2020", "White", 4, 4);
    Car my_second_car = Car("R 777 FD", "Mazda", "2002", "Green", 2, 2);
    Car my_third_car = Car("D 32 GTR", "Nissan", "1989", "Black", 2, 4);

    Car someones_car = Car("E 1994 M", "BMW", "1994", "Silver", 4, 4);

    garage_A.add_car(my_car);
    garage_A.add_car(my_second_car);
    garage_A.add_car(my_third_car);
    garage_A.add_motorcycle(my_motorcycle);

    std::cout << "Garage:\n";

    garage_A.display_cars();
    garage_A.display_motorcycles();

    parkiran_upi.add_car(someones_car);
    parkiran_upi.add_motorcycle(a_motorcycle);
    parkiran_upi.add_motorcycle(b_motorcycle);

    std::cout << "\n\nParking Lot:\n";
    parkiran_upi.display_cars();
    parkiran_upi.display_motorcycles();

    return 0;
}