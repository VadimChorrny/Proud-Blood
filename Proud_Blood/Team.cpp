#include "Team.h"

Team::Team(const string namePerson, const int hp, const string& nameTeam)
	:Unit(namePerson,hp), nameTeam(nameTeam)
{}

void Team::liveCharacter(bool live)
{
	cout << "Person in it moment : \t" << live << endl;
}

void Team::type() const
{
	cout << "Person type:\t" << endl;
}

void Team::print() const
{
	cout << "NAME TEAM : \t" << nameTeam << endl;
	Unit::print();
}
