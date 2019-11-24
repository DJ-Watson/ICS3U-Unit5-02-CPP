// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program calculates the area of a triangle


#include <iostream>


void CalculateArea(int length, int width) {
    // function calculates area
    int area;

    // process
    area = (length * width) / 2;

    // output
    std::cout << "The area is "<< area << "cm²" << std::endl;
}

main() {
    // this function gets length and width

    int lengthInput;
    int widthInput;

    // input
    std::cout << "Enter length of rectangle (cm): ";
    std::cin >> lengthInput;
    std::cout << "Enter width of rectangle (cm): ";
    std::cin >> widthInput;
    std::cout << std::endl;

    // call functions
    CalculateArea(lengthInput, widthInput);
}
