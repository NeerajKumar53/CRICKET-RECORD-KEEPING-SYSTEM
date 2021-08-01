#include <iostream>
#include "Player.h"
#include "Batsman.h"
#include <fstream>
using namespace std;

Batsman::Batsman(){}
Batsman::~Batsman(){}

void Batsman :: openbat()
  {
  fstream f2;
  f2.open("batsman.txt",ios::app);

  cout<<"\n\nEnter total runs of his career:";
  cin>>run;
  cout<<"\n\nhow many centuries he has:";
  cin>>cen;
  cout<<"\n\nHow many half centuries he has:";
  cin>>halfcen;
  cout<<"\n\nHow many times he got out?:";
  cin>>out;
  avg=run/out;

  f2<<"Runs :"<<run<<endl<<"centuries :"<<cen<<endl<<"Half centuries :"<<halfcen<<endl<<"Times He Got out :"<<out<<endl<<"Average :"<<avg<<endl;
  f2.close();

  }
  void Batsman :: showbat()
  {
  cout<<"\n\ntotal runs:"<<run<<"\n\nCentury:"<<cen<<"\n\nHalf century:"<<halfcen
  <<"\n\nAverage:"<<avg;
  }
