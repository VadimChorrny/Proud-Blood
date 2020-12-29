#pragma once
#include "Lib.h"
class BusList
{
public:
	struct Bus
	{
		size_t numBus = 0;
		string name;
		size_t numRoute;
	};
	void setName(const string& name) const;
	void setNumberBus(const size_t& numBus) const;
	void setNumberRoute(const size_t& numRoute) const;
	
private:
	
	Bus* bus;
	friend class AutoPark;
};

