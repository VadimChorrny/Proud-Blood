#pragma once
#include "Unit.h"
#include "Lib.h"
class Team :
    public Unit
{
public:
    Team(const string namePerson, const int hp, const int dmg, const string& nameTeam);
    void liveCharacter() const;
    void typePerson() const;
    void typeWeapon() const;
    void print() const; 
private:
    string nameTeam;
    bool live = true;
};

