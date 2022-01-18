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
    char symbol = '!';
    
    char cString1[] = "abc";
//    char cString2[10];
//    char cString3[20] = "abcde";
    
    
    std::string cppString = "abc";
    std::string twoThingsTogether = cppString + "second thing";
    std::cin >> cppString;
    std::cout << twoThingsTogether;
    
    std::cin >> cString1;
    std::cout << cString1;
    
    
    
    return 0;
}
