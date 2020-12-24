#include "Team.h"

Team::Team(const string namePerson, const int hp, const int dmg, const string& nameTeam)
	:Unit(namePerson,hp,dmg), nameTeam(nameTeam)
{}

void Team::liveCharacter() const
{
	cout << "Person in it moment : \t" << endl;
}

void Team::typePerson() const
{
	cout << "Type peson:\t";
}

void Team::typeWeapon() const
{
	cout << "Type weapon:\t";
}


void Team::print() const
{
	cout << "NAME TEAM : \t" << nameTeam << endl;
	Unit::print();
}
