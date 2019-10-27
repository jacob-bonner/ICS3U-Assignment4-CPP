// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// The program finds the average of three numbers between 1 and 100

#include <stdlib.h>
#include <iostream>

int main() {
    // The function finds the average of three numbers between 1 and 100

    // Variables
    std::string firstNumberString;
    std::string secondNumberString;
    std::string thirdNumberString;
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int average;

    // Input
    std::cout << "Enter your first number between 1-100:" << std::endl;
    std::cin >> firstNumberString;
    std::cout << "Enter your second number between 1-100:" << std::endl;
    std::cin >> secondNumberString;
    std::cout << "Enter your third number between 1-100:" << std::endl;
    std::cin >> thirdNumberString;
    std::cout << "" << std::endl;

    // Process
    try {
        firstNumber = std::stoi(firstNumberString);
        secondNumber = std::stoi(secondNumberString);
        thirdNumber = std::stoi(thirdNumberString);

        if (firstNumber <= 100 && firstNumber >= 1) {
            if (secondNumber <= 100 && secondNumber >= 1) {
                if (thirdNumber <= 100 && thirdNumber >= 1) {
                    average = (firstNumber+secondNumber+thirdNumber)/3;
                    std::cout << "The average of your numbers is " << \
                        average << std::endl;
                } else {
                    std::cout << "Error: unable to calculate average" << \
                        std::endl;
                }
            } else {
                std::cout << "Error: unable to calculate average" << std::endl;
            }
        } else {
            std::cout << "Error: unable to calculate average" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Error: unable to calculate average" << std::endl;
    }
}
