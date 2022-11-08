// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string strYear;
    int intYear;

    // input
    std::cout << "Enter any year: ";
    std::cin >> strYear;

    // process and output
    try {
        intYear = std::stoi(strYear);

        if (intYear < 0) {
            std::cout << "Invalid year.";
        } else {
            if (intYear % 4 == 0 || intYear % 400 == 0) {
                if (intYear % 100 == 0 && intYear % 400 != 0) {
                    std::cout << "This year is not a leap year";
                } else {
                    std::cout << "This year is a leap year.";
                }
            } else {
                std::cout << "This year is not leap year.";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer.";
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
