#include <iostream>
#include "Tool.h"

using namespace std;

Tool::Tool()
{
    strength = 0 ;
}

Tool::~Tool()
{

}

void Tool::set_strength(int s)
{
    strength = s ;
}

void Tool::set_type(char t)
{
    type = t ;
}

int Tool::get_strength()
{
    return strength ;
}

char Tool::get_type()
{
    return type ;
}

void Tool::operator =(const Tool &tool)
{
    strength = tool.strength ;
    type = tool.type ;
}

bool Tool::fight(Tool &tool)
{
    /**Intentionally left empty**/
}
