#include "Unit.h"

Unit::Unit(const string namePerson, const int hp, const int dmg)
	:namePerson(namePerson), hp(hp), dmg(dmg)
{}

void Unit::print() const
{
	cout << "Name:\t" << namePerson << endl;
	typePerson();
	typeWeapon();
	sound();
}
