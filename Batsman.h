#ifndef BATSMAN_H
#define BATSMAN_H
#include "Player.h"

class Batsman:virtual public Player
{
protected:
    int run,out,cen,halfcen;
     int avg;

public:
   Batsman();
  ~Batsman();
   void openbat();
   void showbat();
};
#endif
