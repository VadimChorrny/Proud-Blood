#pragma once
#include "Lib.h"
using namespace std;
class Unit abstract
{
public:
	Unit(const string namePerson, const int hp, const int dmg);
	virtual void print() const abstract;
	virtual void typePerson() const abstract;
	virtual void typeWeapon() const abstract;
	virtual void liveCharacter() const;
	virtual void sound() const abstract;


private:
	string namePerson;
	int hp;
	int dmg;
};

