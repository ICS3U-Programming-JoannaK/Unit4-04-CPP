// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: April 23, 2025
// This program catches erroneous input
// and uses a while true loop for a
// number guessing game

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // declare the variables
    std::string userString;
    int userInteger;
    int randomNumber;

    // Initialize random seed
    srand((unsigned)time(NULL));

    // generate random number between 0 and 9
    randomNumber = rand() % 10;

    // while true loop begins
    while
        (true) {
            // Get user's input as string
            std::cout << "Enter your number: ";
            std::cin >> userString;
            // CAST user's input to an integer
            try {
                userInteger = std::stoi(userString);
                // Checks if the number is in the needed range
                if (userInteger >= 0 && userInteger <= 9) {
                    // Nested If statement
                    // Checks if user's number is the
                    // same as the generated number
                    if (userInteger == randomNumber) {
                        // This displays when the user's number is right
                        std::cout << userInteger << " is correct" << std::endl;
                        // Exits the loop
                        break;
                    } else {
                        // This displays when the user's number is wrong
                        std::cout << userInteger << " is incorrect. Try again."
                        << std::endl;
                    }
                } else {
                    // This displays when the user's number is out of the range
                    std::cout << userInteger << " is not valid." << std::endl;
                }
                // Catches erroneous input ex; words instead of a number
            } catch (std::invalid_argument) {
                std::cout << userString
                << " is not valid, please enter a number." << std::endl;
            }
    }
}
