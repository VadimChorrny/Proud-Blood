#include "BusList.h"

void BusList::addNewBus(const Bus& bus)
{
	busInAutoPark.push_back(bus);
}

void BusList::sellBus(const Bus& id)
{
	busInAutoPark.remove(id);
}

void BusList::PrintParkList() const
{
	// need dev
}
