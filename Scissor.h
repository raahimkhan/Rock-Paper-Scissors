#ifndef Scissor_H
#define Scissor_H
#include "Tool.h"

class Scissor : public Tool
{
	public:
	    /*Default Constructor*/
       Scissor() ;

       /*Parametrized Constructor*/
       Scissor(int str) ;

       /*Destructor*/
       ~Scissor() ;

       /*Over loader*/
       void operator =(const Scissor &s) ;

       /*Virtual function derived from base class*/
       bool fight(Tool &computer) ;
};

#endif
