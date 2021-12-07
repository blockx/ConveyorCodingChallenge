#include "Conveyor.h"
#include "ItemType.h"
#include "Station.h"

ItemType Conveyor::time_step(ItemType new_item)
{
	ItemType item_at_back = conveyor.back();
	conveyor.pop_back();

	conveyor.push_front(new_item);

	// For each Station in conveyor call time_step() passing in the corresponding item on the conveyor
	// and replacing it with the item produced by the station
	for (int i = 0; i < stations.size(); i++)
	{
		ItemType item_on_conveyor = conveyor[i];
		ItemType new_conveyor_item = stations[i].time_step(item_on_conveyor);
		conveyor[i] = new_conveyor_item;
	}

	return item_at_back;
}
