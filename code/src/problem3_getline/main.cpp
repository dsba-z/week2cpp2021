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
    std::string cppBuffer;
    std::getline(std::cin, cppBuffer);
    if(!cppBuffer.empty())
    {
        
    }
    
    char cBuffer[20];
    std::cin.getline(cBuffer, 20);
    char firstCharacter = cBuffer[0];
    // end characteris '\0'
    return 0;
}
