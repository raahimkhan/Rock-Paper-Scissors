#include <iostream>
#include "Scissor.h"
#include "Tool.h"

using namespace std;

Scissor::Scissor() : Tool()
{
    strength = 0 ;
    type = 's' ;
}

Scissor::Scissor(int str) : Tool()
{
    strength = str ;
    type = 's' ;
}

Scissor::~Scissor()
{

}

bool Scissor::fight(Tool &computer)
{
    int scissor_strength_temporary = strength ;

    if (computer.get_type() == 'r') /*Strength half while fighting rock*/
    {
        scissor_strength_temporary = strength/2 ;
    }
    else if (computer.get_type() == 'p') /*Strength doubles while fighting paper*/
    {
        scissor_strength_temporary = 2 * strength ;
    }
    else /*Strength same if encountering scissor*/
    {
        scissor_strength_temporary = strength ;
    }

    /*If scissor strength greater scissor will win (true) else it looses (false)*/
    if (scissor_strength_temporary > computer.get_strength())
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void Scissor::operator =(const Scissor &s)
{
    strength = s.strength ;
    type = s.type ;
}
