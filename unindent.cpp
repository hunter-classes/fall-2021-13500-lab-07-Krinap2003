#include <iostream>
#include <fstream>
#include <cctype>
#include "unindent.h"


std::string removeLeadingSpaces(std::string line)
{
    std::string result = "";
    bool isStart = false;
    for(int i = 0; i < line.length(); i++)
    {
        if(!isspace(line[i]))
        {
            isStart = true;
        }
        if(isStart)
        {
            result += line.substr(i)+"\n";
            break;
        }
    }
    return result;
}