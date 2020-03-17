#ifndef Rock_H
#define Rock_H
#include "Tool.h"

class Rock : public Tool
{
   public:
       /*Default Constructor*/
       Rock() ;

       /*Parametrized Constructor*/
       Rock(int str) ;

       /*Destructor*/
       ~Rock() ;

       /*Over loader*/
       void operator =(const Rock &r) ;

       /*Virtual function derived from base class*/
       bool fight(Tool &computer) ;
};
#endif
