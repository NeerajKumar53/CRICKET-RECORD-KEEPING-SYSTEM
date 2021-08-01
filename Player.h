#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
	~Player();
    void in();
	void out1();
    char name[30];
    int age;
	int match;
};
#endif
	