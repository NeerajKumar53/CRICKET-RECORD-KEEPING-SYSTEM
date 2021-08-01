#include<iostream>
#include <cstring>
#include "Batsman.h"
#include "Bowler.h"
#include "General.h"
#include "Player.h"
using namespace std;

int main ()
 {
 int  i,j,ch,chl,mavg,mmatch,mage,mbavg,mbmatch,mecn,mage1;

 char nam[20];

 cout<<"\n\n\nWelcome To Players Profile.... ";



 General ge[100];


 for (i=0;  ;i++)
 {
 cout<<"\n\n\nWhat do you want to do?"<<endl<<"\n1.Create profile"<<"\n2.edit profile"

 <<"\n3.To show"<<"\n4.search"<<"\n5.Exit";
 cin>>ch;

 switch(ch)
 {
 case 1:
    for(j=0;j<100  ;j++)
    {
    ge[j].openprof();
    break;
    }

    break;

 case 2:
    cout<<"\n\nEnter name:";
    cin>>nam;

    for(j=0;j<100  ;j++)
    {
    if(strcmp(ge[j].name,nam)==0)
    {
    cout<<"\n1.batting"<<"\n2.bowling";
    cin>>chl;
    if(chl==1)
    ge[j].editbat();
    if(chl==2)
    ge[j].editbowl();
    break;
    }
    }
    break;
 case 3:
    {
    cout<<"\n\nEnter name:";
    cin>>nam;

    for(j=0;j<100  ;j++)
    {
    if(strcmp(ge[j].name,nam)==0)
    ge[j].show();
    }
    break;
     }
 case 4:
    cout<<"\n1.batting performance:"<<"\n2.bowling performance:" ;
    cin>>chl;
    if(chl==1)
    {
    cout<<"\n\nEnter his batting average:";
    cin>>mavg;
     cout<<"\n\nNumber of match played:";
    cin>>mmatch;
    cout<<"\n\n Age:";
    cin>>mage;
    }
    if(chl==2) {
    cout<<"\n\nEnter his bowling average:";
    cin>>mbavg;
    cout<<"\n\nNumber of match played :";
    cin>>mbmatch;
    cout<<"\n\nHis economy rate:";
    cin>>mecn;
    cout<<"\n\nAge:";
    cin>>mage;
    }

    for(j=0;j<100  ;j++)



    {
    if(chl== 1)
    ge[j].searchbat(mavg,mmatch,mage);
    if(chl==2)
    ge[j].searchbowl(mbavg,mbmatch,mecn,mage1);

    }

    break;
    case 5:
        break;

default :
cout<<"invalid Entry Press from 1 - 5";
	}




}

return 0;
}
