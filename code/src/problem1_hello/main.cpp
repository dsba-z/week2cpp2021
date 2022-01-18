////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 1: "Hello, %username%".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for their name and then outputs "Hello, <user>",
/// where <user> is the name the user.
///
////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>

int main()
{
    char b = '!';
    char cString[] = "abc";
    char cString2[10];
    char cString3[20] = "abcde";
    
    size_t a = 5;

    std::string cppString = "abc";
    
    std::cin >> cppString;
    std::cout << cppString + "123";
    
    std::cin >> cString;
    std::cout << cString;
    
    return 0;
}
