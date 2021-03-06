#ifndef __CONVEYOR_H__
#define __CONVEYOR_H__

#include "ItemType.h"
#include "Station.h"

#include <deque>

class Conveyor
{
public:
	ItemType time_step(ItemType new_item);

private:
	const int no_of_stations = 3;
	std::deque<ItemType> conveyor { no_of_stations, ItemType::MT };
	std::deque<Station> stations { no_of_stations };
};

#endif // ndef __CONVEYOR_H__
