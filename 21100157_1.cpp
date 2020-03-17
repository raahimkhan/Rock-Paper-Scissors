#include <iostream>
#include "Tool.cpp"
#include "Rock.cpp"
#include "Paper.cpp"
#include "Scissor.cpp"
#include "RPSPlay.cpp"
#include <cstdlib>

using namespace std;

/*Test function to verify results*/
void test(Tool *t1 , Tool *t2 , Tool *t3)
{
    /*Pointers of base class to derived classes dynamically*/
    t1 = new Rock(15) ;
    t2 = new Paper(7) ;
    t3 = new Scissor(5) ;

    cout << "Testing Rock vs Paper" <<endl ;
    cout << t1 -> fight(*t2) <<endl ;
    cout << "Paper won!" <<endl ;
    cout <<endl ;
    cout << "Testing Rock vs Scissor" <<endl ;
    cout << t1 -> fight(*t3) <<endl ;
    cout << "Rock won!" <<endl ;
    cout <<endl ;
    cout << "Testing Paper vs Scissor" <<endl ;
    cout << t2 -> fight(*t3) <<endl ;
    cout << "Scissor won!" <<endl ;
    cout <<endl ;

    delete t1 ;
    delete t2 ;
    delete t3 ;
}

void intro()
{
    cout << "**************************" <<endl ;
    cout << "* ROCK , PAPER , SCISSOR *" <<endl ;
    cout << "**************************" <<endl ;
}

int main()
{

/**Testing**/

/*Pointers of Base class*/
Tool *rock ;
Tool *paper ;
Tool *scissor ;

cout <<endl ;

intro() ;

cout <<endl ;

/*Test function called to test different tools*/
test(rock , paper , scissor) ;

cout <<endl ;

system("PAUSE") ;

system("CLS") ;

cout <<endl ;
intro() ;
cout <<endl ;
cout << "Testing one of the overloaded assignment operator" <<endl ;
cout <<endl ;
Rock r1 ;
Rock r2 ;
r1.set_strength(20) ;
r1.set_type('r') ;
r2 = r1 ;
cout << "Printing r2 (refer to the code in main at line 78" <<endl ;
cout <<endl ;
cout << "r2 strength is  :  " << r2.get_strength() <<endl ;
cout << "r2 type is :  " << r2.get_type() <<endl ;
cout <<endl ;

system("PAUSE") ;

system("CLS") ;

/**RPSPlay Portion of Main Code**/

RPSPlay game ;

game.play() ;

return 0;
}
