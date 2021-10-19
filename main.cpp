/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 6
*/

#include <iostream>
#include <fstream>
#include "unindent.h"
#include  "indent.h"

int main()
{
    //Task A
    std::ifstream badCode("badcode.cpp");
    if(badCode.fail())
    {
        std::cout<<"cannot open file";
        exit(1);
    }
    std::string line;
     for (std::string line; std::getline(badCode, line);) {
        std::cout << removeLeadingSpaces(line) << std::endl;
    }
    badCode.close();
    
    return 0;
}

