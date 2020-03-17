#include <iostream>
#include "RPSPlay.h"
#include "Tool.h"
#include <cstdlib>
#include <ctime>

using namespace std;

RPSPlay::RPSPlay() : Tool()
{
   computerwins = 0 ;
   humanwins = 0 ;
   ties = 0 ;
   human = NULL ;
   computer = NULL ;
}

void RPSPlay::play()
{
    char choice ;
    cout <<endl ;
    int computerchoice ;
    do
   {
       intro() ;
       srand(time(NULL)) ;
       computerchoice = (rand()%3) + 1 ;
       cout << "Press 1 for 'Rock'" <<endl ;
       cout << "Press 2 for 'Paper'" <<endl ;
       cout << "Press 3 for 'Scissor'" <<endl ;
       cout << "Press q to quit" <<endl ;
       cout <<endl ;
       cout << "Your choice  :   " ;
       repeat : cin >> choice ;
       cout <<endl ;

       if (choice == '1')
       {
           cout << "You chose Rock!" <<endl ;
           human = new Rock ;
           human -> set_type('r') ;
           if (computerchoice == 1)
           {
               cout << "Computer choose Rock!" <<endl ;
               computer = new Rock ;
               computer -> set_type('r') ;
           }
           else if (computerchoice == 2)
           {
               cout << "Computer choose Paper!" <<endl ;
               computer = new Paper ;
               computer -> set_type('p') ;
           }
           else if (computerchoice == 3)
           {
               cout << "Computer choose Scissor!" <<endl ;
               computer = new Scissor ;
               computer -> set_type('s') ;
           }
           cout <<endl ;
           cout << "Battle Begins!" <<endl ;
           cout <<endl ;
           int result ;
           result = human -> fight(*computer) ;
           if (human -> get_type() == 'r' && computer -> get_type() == 'r')
           {
               cout << "It's a tie!" <<endl ;
               ties++ ;
               goto end ;
           }

           if (result == 1)
           {
               cout << "You won the game!" <<endl ;
               humanwins++ ;
           }
           else
           {
               cout << "Computer won the game!" <<endl ;
               computerwins++ ;
           }

       }

           else if (choice == '2')
       {
           cout << "You chose Paper!" <<endl ;
           human = new Paper ;
           human -> set_type('p') ;
           if (computerchoice == 1)
           {
               cout << "Computer choose Rock!" <<endl ;
               computer = new Rock ;
               computer -> set_type('r') ;
           }
           else if (computerchoice == 2)
           {
               cout << "Computer choose Paper!" <<endl ;
               computer = new Paper ;
               computer -> set_type('p') ;
           }
           else if (computerchoice == 3)
           {
               cout << "Computer choose Scissor!" <<endl ;
               computer = new Scissor ;
               computer -> set_type('s') ;
           }
           cout <<endl ;
           cout << "Fight is about to begin!" <<endl ;
           cout <<endl ;
           int result ;
           result = human -> fight(*computer) ;
           if (human -> get_type() == 'p' && computer -> get_type() == 'p')
           {
               cout << "It's a tie!" <<endl ;
               ties++ ;
               goto end ;
           }

           if (result == 1)
           {
               cout << "You won the game!" <<endl ;
               humanwins++ ;
           }
           else
           {
               cout << "Computer won the game!" <<endl ;
               computerwins++ ;
           }
        }

       else if (choice == '3')
       {
           cout << "You chose Scissor!" <<endl ;
           human = new Scissor ;
           human -> set_type('s') ;
           if (computerchoice == 1)
           {
               cout << "Computer choose Rock!" <<endl ;
               computer = new Rock ;
               computer -> set_type('r') ;
           }
           else if (computerchoice == 2)
           {
               cout << "Computer choose Paper!" <<endl ;
               computer = new Paper ;
               computer -> set_type('p') ;
           }
           else if (computerchoice == 3)
           {
               cout << "Computer choose Scissor!" <<endl ;
               computer = new Scissor ;
               computer -> set_type('s') ;
           }
           cout <<endl ;
           cout << "Fight is about to begin!" <<endl ;
           cout <<endl ;
           int result ;
           result = human -> fight(*computer) ;
           if (human -> get_type() == 's' && computer -> get_type() == 's')
           {
               cout << "It's a tie!" <<endl ;
               ties++ ;
               goto end ;
           }

           if (result == 1)
           {
               cout << "You won the game!" <<endl ;
               humanwins++ ;
           }
           else
           {
               cout << "Computer won the game!" <<endl ;
               computerwins++ ;
           }
        }

       else if (choice == 'q')
       {
           cout << "Program is ending" <<endl ;
           exit(1) ;
       }

       else
       {
           cout << "Invalid option selected!" <<endl ;
           cin.clear() ;
           cin.ignore() ;
           goto repeat ;
           cout << "Enter choice again :   " ;
       }
       end : cout <<endl <<endl ;

       delete human ;
       delete computer ;

       scoreboard() ;
       cout <<endl ;
       system("Pause") ;
       system("CLS") ;
    }
   while(1) ;
}



bool RPSPlay::fight(Tool &computer)
{
    /**Intentionally left empty**/
}

void RPSPlay::scoreboard()
{
    cout << "Human Wins =  " <<humanwins <<endl ;
    cout << "Computer Wins =  " <<computerwins <<endl ;
    cout << "Ties =  " <<ties <<endl ;
}

void RPSPlay::intro()
{
    cout <<endl ;
    cout << "**************************" <<endl ;
    cout << "* ROCK , PAPER , SCISSOR *" <<endl ;
    cout << "**************************" <<endl ;
    cout <<endl ;
    cout << "Human vs AI battle about to begin!" <<endl ;
    cout <<endl ;
}

RPSPlay::~RPSPlay()
{
    delete human ;
    delete computer ;
}
