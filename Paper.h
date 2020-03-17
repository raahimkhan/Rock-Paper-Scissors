#ifndef Paper_H
#define Paper_H
#include "Tool.h"

class Paper : public Tool
{
	public:
       /*Default Constructor*/
       Paper() ;

       /*Parametrized Constructor*/
       Paper(int str) ;

       /*Destructor*/
       ~Paper() ;

       /*Over loader*/
       void operator =(const Paper &p) ;

       /*Virtual function derived from base class*/
       bool fight(Tool &computer) ;
};

#endif
