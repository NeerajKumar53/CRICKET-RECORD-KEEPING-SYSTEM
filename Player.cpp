#include<iostream>
#include<fstream>
#include "Player.h"
using namespace std;

Player::Player(){}
Player::~Player(){}

void Player::in()
{
 fstream f1;
    f1.open("fill_player.txt",ios::app);

    cout<<"\n\nEnter the players name:";
    cin>>name;
    cout<<"\n\nEnter the age of the players:";
    cin>>age;
    cout<<"\n\nEnter the number of matches he played:";
    cin>>match;

    f1<<"Name :"<<name<<endl<<"Age :"<<age<<endl<<"Number Of Matches Played :"<<match<<endl;

    f1.close();
}

void Player::out1()
{cout<<"\n\nName:"<<name<<"\n\nAge:"<<age<<"\n\nNumber of matches:"<<match;}