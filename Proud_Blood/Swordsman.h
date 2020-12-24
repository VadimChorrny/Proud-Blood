#pragma once
#include "Team.h"
#include "Lib.h"
class Swordsman :
    public Team
{
public:
    Swordsman(const string namePerson, const int hp, const int dmg,const string nameTeam, const int dodge);
    void typePerson() const override;
    void typeWeapon() const override;
    void liveCharacter() const override;
    void print() const override;
private:
    int dodge;
};

