#include <iostream>
#include "Rock.h"
#include "Tool.h"

using namespace std;

Rock::Rock() : Tool()
{
    strength = 1 ;
    type = 'r' ;
}

Rock::Rock(int str) : Tool()
{
    strength = str ;
    type = 'r' ;
}

Rock::~Rock()
{

}

bool Rock::fight(Tool &computer)
{
    int rock_strength_temporary = strength ;

    if (computer.get_type() == 's') /*Strength doubles while fighting scissor*/
    {
        rock_strength_temporary = 2 * strength ;
    }
    else if (computer.get_type() == 'p') /*Strength half while fighting paper*/
    {
        rock_strength_temporary = strength/2 ;
    }
    else /*Strength same if encountering rock*/
    {
        rock_strength_temporary = strength ;
    }

    /*If rock strength greater rock will win (true) else it looses (false)*/
    if (rock_strength_temporary > computer.get_strength())
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void Rock::operator =(const Rock &r)
{
    strength = r.strength ;
    type = r.type ;
}
