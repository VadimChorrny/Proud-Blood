#pragma once
#include "Team.h"
#include "Lib.h"
class Swordsman :
    public Team
{
public:
    Swordsman();
private:
    int dodge = 60;
};

