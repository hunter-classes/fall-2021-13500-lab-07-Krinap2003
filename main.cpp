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
    std::cout<<"Task A ";
    std::cout<<"\n --------------------------------- \n";
    std::ifstream badCode("badcode.cpp");
    std::ofstream out;
    out.open("fixed.cpp");
    if(badCode.fail())
    {
        std::cout<<"cannot open file";
        exit(1);
    }
    std::string line;
     for (std::string line; std::getline(badCode, line);) {
        std::cout << removeLeadingSpaces(line);
        out<<removeLeadingSpaces(line);
    }
    badCode.close();
    out.close();

    //Task B
    std::cout<<"Task B";
    std::cout<<"\n --------------------------------- \n";
    badCode.open("badcode2.cpp");
    std::ofstream out2;
    out2.open("fixed-indented.cpp");
    if(badCode.fail())
    {
        std::cout<<"cannot open file";
        exit(1);
    }
    int open = 0;
    int close = 0;
    int tab= 0;
    for (std::string line; std::getline(badCode, line);) 
    {
        std::string s = removeLeadingSpaces(line);
        std::cout<<indent(s, tab); 
        out2<<indent(s, tab);
        open = countChar(line, '{');
        close = countChar(line, '}');
        if(open == 1)
        {
            tab+=1;
        }
        if(close == 1)
        {
            tab-=1;
        }
    }
    badCode.close();
    out2.close();

    return 0;
}

