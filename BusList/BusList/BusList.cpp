#include "BusList.h"

BusList::BusList(const string& name, const size_t& numBus, const size_t& numRoute)
{
	setName(name);
	setNumberBus(numBus);
	setNumberRoute(numRoute);
}

void BusList::setName(const string& name) const
{
	if (!name.empty())
		bus->name = name;
}

void BusList::setNumberBus(const size_t& numBus) const
{
	// future bug!!!!
	++bus->numBus;
	if (numBus > 0)
		bus->numBus = numBus;
}

void BusList::setNumberRoute(const size_t& numRoute) const
{
	if (numRoute > 0)
		bus->numRoute = numRoute;
}
