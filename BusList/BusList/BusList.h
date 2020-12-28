#pragma once
#include "Lib.h"
class BusList
{
public:
	struct Bus
	{
		size_t numBus;
		string name;
		size_t numRoute;
	};
	void addNewBus(const Bus& bus);
	void sellBus(const Bus& id);
	void PrintParkList() const;
	void PrintRouteList() const;
private:
	
	list<Bus> busInAutoPark;
	list<Bus> busInRoute;
	friend class AutoPark;
};

