#include <iostream>
#include "Paper.h"
#include "Tool.h"

using namespace std;

Paper::Paper() : Tool()
{
    strength = 1 ;
    type = 'p' ;
}

Paper::Paper(int str) : Tool()
{
    strength = str ;
    type = 'p' ;
}

Paper::~Paper()
{
    delete this ;
}

bool Paper::fight(Tool &computer)
{
    int paper_strength_temporary = strength ;

    if (computer.get_type() == 's') /*Strength half while fighting scissor*/
    {
        paper_strength_temporary = strength/2 ;
    }
    else if (computer.get_type() == 'r') /*Strength doubles while fighting rock*/
    {
        paper_strength_temporary = 2 * strength ;
    }
    else /*Strength same if encountering paper*/
    {
        paper_strength_temporary = strength ;
    }

    /*If paper strength greater paper will win (true) else it looses (false)*/
    if (paper_strength_temporary > computer.get_strength())
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void Paper::operator =(const Paper &p)
{
    strength = p.strength ;
    type = p.type ;
}
