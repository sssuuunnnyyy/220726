#pragma once
class Character
{
public:
	Character();
	~Character();

protected:
	int X;
	int Y;
	int HP;

public:
	void move();
	void attack();

};

