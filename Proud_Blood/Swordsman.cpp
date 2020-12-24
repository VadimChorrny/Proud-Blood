#include "Swordsman.h"

Swordsman::Swordsman(const string namePerson, const int hp, const int dmg, const string nameTeam,const int dodge)
	:Team(namePerson,hp,dmg,nameTeam), dodge(dodge)
{}

void Swordsman::typePerson() const
{
	cout << "It is a - ";
	Team::typePerson();
	
}

void Swordsman::typeWeapon() const
{
	cout << "Type weapon:\t";
	Team::typeWeapon();
}

void Swordsman::liveCharacter() const
{
	cout << "State person:\t";
	Team::liveCharacter();
}

void Swordsman::print() const
{
	Team::print();
	cout << "Dodge = " << dodge << endl;
}
