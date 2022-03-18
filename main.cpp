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
    std::cout<<"\n --------------------------------- \n";
    std::cout<<"Task A ";
    std::cout<<"\n --------------------------------- \n";
    //opens the badcode.cpp file
    std::ifstream badCode("badcode.cpp");
    std::ofstream out;
    //creates a new fixed-unindented file
    out.open("fixed-unindented.cpp");
    if(badCode.fail())
    {
        std::cout<<"cannot open file";
        exit(1);
    }
    std::string line;
    //loops through the entire badcode file line by line
    for (std::string line; std::getline(badCode, line);) {
        //prints out the line without leading spaces
        std::cout << removeLeadingSpaces(line);
        //save the lines without leading spaces in the fixed file.
        out<<removeLeadingSpaces(line);
    }
    badCode.close();
    out.close();

    //Task B
    std::cout<<"\n --------------------------------- \n";
    std::cout<<"Task B";
    std::cout<<"\n --------------------------------- \n";
    badCode.open("badcode2.cpp");
    std::ofstream out2;
    //creates a new fixed-indented files
    out2.open("fixed-indented.cpp");
    if(badCode.fail())
    {
        std::cout<<"cannot open file";
        exit(1);
    }
    int open = 0;
    int close = 0;
    int tab = 0;
    for (std::string line; std::getline(badCode, line);)
    {
        //checks if there is a close bracket and if there is it
        //reduces the number of tabs by 1
        close = countChar(line, '}');
        if(close == 1)
        {
            tab = tab - 1;
        }
        //removes leading spaces
        std::string s = removeLeadingSpaces(line);
        //call the indent function to indent the line
        std::cout<<indent(s, tab);
        //indents and save the line in the fixed-indented file
        out2<<indent(s, tab);
        //counts if there is a open bracket
        open = countChar(line, '{');
        //if there is the tab is increased by one
        if(open == 1)
        {
            tab = tab + 1;
        }
    }
    badCode.close();
    out2.close();
    std::cout<<"HI";

    return 0;
}
