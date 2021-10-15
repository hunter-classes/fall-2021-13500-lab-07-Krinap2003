/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 6
*/

#include <iostream>
#include <fstream>
#include "unindent.h"

int main()
{
    std::string line;
    while(getline(std::cin, line))
    {
        std::cout<<removeLeadingSpaces(line);
    }
    return 0;
}