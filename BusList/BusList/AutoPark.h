#pragma once
#include "Lib.h"
#include "FwdList.h"
class AutoPark 
	: public BusList
{
public:
	
	AutoPark(const string& name, const size_t& numBus, const size_t& numRoude);
	void addBus(BusList bus);
	void sendBus(const size_t& numBus);
	void delFromAutoPark(const size_t& numberBus);
	void delFromRoute(const size_t& numbBus);

private:
	list<BusList> busInRoude;
	list<BusList> busInAutoPark;
	Bus* b;
};

