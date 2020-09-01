#pragma once
#include"Header.h"
class Player
{
private:
	char name[20];
protected:
	SOCKET server;
	char mess[100];
	char protocol[20], values[20];
	int state = 0;// state=0 your turn, =1 oppenent turn
	Vector2i lastMove = { -1,0 };// luu nuoc di gan nhat
	short** board;

public:
	void lostTurn();
	virtual Vector2i move() = 0;
	char* getName();
	void setBoard(short** board);
	Player(char* name, SOCKET server);
	~Player();
};

