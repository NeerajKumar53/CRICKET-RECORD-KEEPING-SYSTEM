#include<iostream>
#include "Batsman.h"
#include "Bowler.h"
#include "General.h"
using namespace std;

General::General(){}
General::~General(){}


void General :: openprof()
 {
 in();
 openbat();
 openbowl();
 }

 void General :: show()
 {
 out1();
 showbat();
 showbowl();
 }

 void General :: editbat()
 {
 cout<<"\n\nRuns to add:";
 cin>>runs;
 run=run+runs;
 cout<<"\n\nOuts to add:";
 cin>>outs;
 out=out+outs;
 cout<<"\n\nCenturies to add:";
 cin>>cens;
 cen=cen+cens;
 cout<<"\n\nHalf centuries to add:";
 cin>>halfcens;
 
 
 
 
 
 
 
 
 
 halfcen=halfcen+halfcens;
 }

 void General :: editbowl()
 {
 cout<<"\n\nWickets to add:";
 cin>>wics;
 wic=wic+wics;
 cout<<"\n\ntimes of getting 5 wickets to add:";
 cin>>halfs;
 half=half+halfs;
 cout<<"\n\nGiving runs to add:";
 cin>>bruns;
 brun=bruns+brun;
 cout<<"\n\novers to add:";
 cin>>ovrs;
 ovr=ovr+ovrs;
 }

 void General :: searchbat(int a,int b,int c)
 {


 if(avg==a && b==match && c==age)

 cout<<endl<<"Name : "<<name;
 }

 void General :: searchbowl(int a,int b,int c,int d)
 {



 if(a==bavg && b==match && c==ecn && d==age)
 cout<<endl<<"Name : "<<name;

 }
