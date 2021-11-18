//Task B
#include <iostream>
#include <fstream>
#include <cctype>
#include "unindent.h"
#include "indent.h"


//indents the line based on the number of tabs
std::string indent(std::string line, int tab)
{
    std::string result = "";
    for(int i = 0; i < tab; i++)
    {
        result+="\t";
    }
    return result + line;
}

//counts the nmber of char by iterating through line
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
