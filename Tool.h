#ifndef Tool_H
#define Tool_H

class Tool{

	public:
	    /*Constructor and Destructor*/
	    Tool() ;
       ~Tool() ;

       /*Setters*/
       void set_strength(int s) ;
       void set_type(char t) ;

       /*Getters*/
       int get_strength() ;
       char get_type() ;

       /*Virtual Function*/
       virtual bool fight(Tool &tool)  ;

       /*Over loader*/
       void operator =(const Tool &tool) ;

    protected:
        int strength ;
        char type ;
};

#endif
