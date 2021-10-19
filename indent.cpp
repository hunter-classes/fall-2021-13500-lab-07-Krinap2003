#include <iostream>
#include <fstream>
#include <cctype>
#include "unindent.h"
#include "indent.h"

// int countChar(std::string line, char c)
// {
//     int result = 0; 
//     for(int i = 0; i < line.length(); i++)
//     {
//         if(line[i] == c)
//         {
//             result++;
//         }
//     }
//     return result;
// }

std::string indent(std::string line, int openBrace, int closeBrace)
{
    std::string result = "";
    for(int i = 0; i < openBrace; i++)
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
