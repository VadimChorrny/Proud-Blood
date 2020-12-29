#include "AutoPark.h"

AutoPark::AutoPark(const string& name, const size_t& numBus, const size_t& numRoude)
	:BusList(name,numBus,numRoude)
{
}

void AutoPark::addBus(BusList bus)
{
	
}

void AutoPark::sendBus(const size_t& numBus)
{
	busInAutoPark.pop_back();
	++b->numRoute;
}

void AutoPark::delFromAutoPark(const size_t& numberBus)
{
	busInAutoPark.pop_back();
	--b->numBus;
}

void AutoPark::delFromRoute(const size_t& numbBus)
{
	--b->numRoute;
}
