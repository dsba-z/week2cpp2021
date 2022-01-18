////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Reading text strings using getline".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Train reading text string with spaces and other special symbol using
/// cin.getline() for c-strings and std::getline() for std::string-s.
/// Then, consider the “read lines until first empty line” idiom.
///
////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>


int main()
{
    char cBuffer[100];
    std::cin.getline(cBuffer, 100);
    char firstCharacter = cBuffer[0];
    
    std::string cppBuffer;
    std::getline(std::cin, cppBuffer);
    cppBuffer.empty();

    return 0;
}
