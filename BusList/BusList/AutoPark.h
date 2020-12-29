#pragma once
#include "Lib.h"
class AutoPark
{
public:
	void addBus(BusList bus);
	void sendBus(const size_t& numBus);
private:
	list<BusList> busInRoude;
	list<BusList> busInAutoPark;
};

