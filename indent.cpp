#include <iostream>
#include <fstream>
#include <cctype>
#include "unindent.h"
#include "indent.h"

std::string indent(std::string line, int tab)
{
    std::string result = "";
    for(int i = 0; i < tab; i++)
    {
        result+="\t";
    }
    return result + line;
}

int countChar(std::string line, char c)
{
    int result = 0; 
    for(int i = 0; i < line.length(); i++)
    {
        if(line[i] == c)
        {
            result++;
        }
    }
    return result;
}
