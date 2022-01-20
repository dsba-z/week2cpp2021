////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 7: "Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    
    char cBuffer[100];
    
    

    
    int array[20000];
    int arraySize;
    int element;
    std::cin >> arraySize;
    
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> element;
        array[i] = element;
    }
    
    return 0;
}
