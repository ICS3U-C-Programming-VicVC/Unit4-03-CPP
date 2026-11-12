// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 09/16/26
// Write what this program does.


#include<iostream>
#include<string>


char const EXPO_MSG[] = ("Enter the Exponent number: ");
char const BASE_MSG[] = ("Enter the base number: ");

char const ERR_MSG[] = (" are invalid Inputs!\n (MUST BE POSITIVE INPUTS!)\n");


int main() {
    // Setting needed variables
    std::string baseStr;
    std::string expoStr;

    // Getting the base number and exponent number from the user
    std::cout << BASE_MSG;
    std::cin >> baseStr;

    std::cout << EXPO_MSG;
    std::cin >> expoStr;


    try {
        // converting the inputs to numbers
        int base = std::stoi(baseStr);
        int expo = std::stoi(expoStr);

        // converting the inputs to decimal numebers
        // for decimal detection
        float baseFlo = std::stof(baseStr);
        float expoFlo = std::stof(expoStr);

        // Detecting decimals
        if (base != baseFlo || expo != expoFlo) {
            std::cout
            << "base: "
            << baseStr
            << " or exponent: "
            << expoStr
            << ERR_MSG;
        } else {
            // Setting the num
            int sum_num = 1;

            // Calculating the sum starting the counter at 0
            for (int counter = 0; counter < expo; counter += 1) {
                sum_num *= base;
            }

            // Displaying the sum to the user
            std::cout
            << base
            << " to the power of "
            << expo
            << " = "
            << sum_num
            << "\n";
        }
    } catch(std::invalid_argument) {
        std::cout
        << "base: "
        << baseStr
        << " or exponent: "
        << expoStr
        << ERR_MSG;
    }
}
