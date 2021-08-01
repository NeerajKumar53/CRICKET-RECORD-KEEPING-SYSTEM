#ifndef GENERAL_H
#define GENERAL_H
#include "Batsman.h"
#include "Bowler.h"
#include "Player.h"

class General:public Batsman, public Bowler
{

 public:
   General();
  ~General();
   void openprof();
   void editbat();
   void editbowl();
   void searchbat(int a,int b,int c);
   void searchbowl(int a,int b,int c,int d);
   void show();

 protected:
       int runs,outs,cens,halfcens,wics,halfs,bruns,ovrs;
	   
};
#endif








