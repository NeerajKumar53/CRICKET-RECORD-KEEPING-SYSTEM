#ifndef BOWLER_H
#define BOWLER_H
#include "Bowler.h"

class Bowler:virtual public Player
{
   protected:
        int wic,half,brun,ovr;
        int ecn,bavg;

  public:
    Bowler();
	~Bowler();
    void openbowl();
    void showbowl();
};
#endif
