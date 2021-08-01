#include<iostream>
#include "Player.h"
#include "Bowler.h"
#include<fstream>
using namespace std;


Bowler::Bowler(){}
Bowler::~Bowler(){}


 void Bowler :: openbowl()
 {
  fstream f3;
  f3.open("bowler.txt",ios::app);


  cout<<"\n\nEnter the number of wicket he got:";
  cin>>wic;
  cout<<"\n\nEnter the number of runs he gave:";
  cin>>brun;
  cout<<"\n\nHow many times he got 5 wickets:";
  cin>>half;
  bavg=brun/wic;
  cout<<"\n\nHow many overs he bowld:";
  cin>>ovr;
  ecn=brun/ovr;
  f3<<"Number Of wickets :"<<wic<<endl<<"Runs he gave :"<<brun<<endl<<"5 wicket Haul :"<<half<<" Times"<<endl<<"Number Of overs Bowled :"<<ovr<<endl<<"Economy :"<<ecn<<endl;
  f3.close();

 }
  void Bowler :: showbowl()
 {
 cout<<"\n\nNumber of wickets:"<<wic<<"\n\nGiven runs:"<<brun<<"\n\nTimes to get 5 wickets:"
 <<half<<"\n\nBowling average:"<<bavg<<"\n\nEconomy rate:"<<ecn;
 }