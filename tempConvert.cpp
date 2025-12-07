// Copyright (c) 2025 Brandon All rights reserved.
// Created By: Brandon
// Date: December 7, 2025
// Program allows a user to enter a temperature in degrees Celsius,
// then converts it to degrees Farenheit and displays the result.

#include <iostream>
#include <string>
#include <iomanip>

int calculateTemperature() {
    std::cout << "Enter the temperature in Celsius: ";
    std::string celsiusInput;
    std::cin >> celsiusInput;

    try {
    // get temperature in celsius from user
    float celsius = std::stoi(celsiusInput);

    // convert celsius to farenheit
    float farenheit = (celsius * 9 / 5) + 32;

    // display the temperature in farenheit
    std::cout << celsius << " ℃ is equal to " << farenheit << "°F" << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "Please enter a valid integer\n";
    }
}

int main() {
    // call the function
    calculateTemperature();
}
