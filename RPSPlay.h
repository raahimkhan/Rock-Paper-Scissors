#ifndef RPSPlay_H
#define RPSPlay_H
#include "Tool.h"

class RPSPlay : public Tool
{
    protected:
        int computerwins ;
        int humanwins ;
        int ties ;
        Tool *human ;
        Tool *computer ;


    public:
        bool fight(Tool &computer) ;
        RPSPlay() ; /*Constructor*/
        ~RPSPlay() ; /*Destructor*/
        void scoreboard() ; /*To display score*/
        void intro() ; /*Random title screen*/
        void play() ; /*To start the game*/

};

#endif

