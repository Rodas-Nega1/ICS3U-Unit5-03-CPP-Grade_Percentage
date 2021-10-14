// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for their grade level and
// converts it into a middle percentage


#include <iostream>


float LevelConversion(std::string gradeLevel) {
    // convert level to percentage
    float gradePercentage;

    // process
    if (gradeLevel == "4+") {
        gradePercentage = 97.5;
    } else if (gradeLevel == "4") {
        gradePercentage = 90.5;
    } else if (gradeLevel == "4-") {
        gradePercentage = 83.0;
    } else if (gradeLevel == "3+") {
        gradePercentage = 78.0;
    } else if (gradeLevel == "3") {
        gradePercentage = 74.5;
    } else if (gradeLevel == "3-") {
        gradePercentage = 71.0;
    } else if (gradeLevel == "2+") {
        gradePercentage = 68.0;
    } else if (gradeLevel == "2") {
        gradePercentage = 64.5;
    } else if (gradeLevel == "2-") {
        gradePercentage = 61.0;
    } else if (gradeLevel == "1+") {
        gradePercentage = 58.0;
    } else if (gradeLevel == "1") {
        gradePercentage = 54.5;
    } else if (gradeLevel == "1-") {
        gradePercentage = 51.0;
    } else if (gradeLevel == "R") {
        gradePercentage = 24.5;
    } else {
        gradePercentage = -1.0;
    }

    return gradePercentage;
}

main() {
    // this function calls the precedent function
    std::string userGradeLevel;
    float levelConverted;

    // input & output
    std::cout << "Enter your level for percentage conversion: ";
    std::cin >> userGradeLevel;

    levelConverted = LevelConversion(userGradeLevel);

    if (levelConverted == -1) {  // error check
        std::cout << "That is an invalid level." << std::endl;
    } else {
        std::cout << "Level " << userGradeLevel <<
        " has a middle percentage of " << levelConverted << "%." << std::endl;
    }

        std::cout << "\nDone." << std::endl;
}
