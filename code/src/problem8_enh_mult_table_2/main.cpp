////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: "Enhanced Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Modification of the Problem 7 (Multiplication Table), where a user can
/// repeat a solution multiple times (with using the “do..while” loop).
///
////////////////////////////////////////////////////////////////////////////////
#include "iostream"
#include "string"
#include <cstring>

int main()
{
    std::string cString1;
    std::cin >> cString1;

    std::string cString2;
    std::cin >> cString2;

    std::cout << cString1.size() << "\n";
    std::cout << cString1.length() << "\n";

    std::cout << cString2.size() << "\n";
    std::cout << cString2.length() << "\n";

    std::cout << (cString1 < cString2) << "\n";
    std::cout << (cString1 = cString2) << "\n";
    std::cout << (cString1 > cString2) << "\n";
    std::cout << (cString1 + cString2) << "\n";

    char charText[] = "hello";
    char charTextTwo[] = "world";
    std::cout << strlen(charText);
    std::cout << strcmp(charText, charTextTwo);

    return 0;
}
