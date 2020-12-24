#pragma once
#include "Unit.h"
#include "Lib.h"
class Team :
    public Unit
{
public:
    Team(const string namePerson, const int hp, const int dmg, const string& nameTeam);
    void liveCharacter(bool live);
    void type() const;
    void print() const; 
private:
    string nameTeam;
    bool live = true;
};

