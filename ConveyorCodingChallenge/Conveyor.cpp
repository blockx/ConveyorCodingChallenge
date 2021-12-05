#include "Conveyor.h"
#include "ItemType.h"
#include "Station.h"

ItemType Conveyor::time_step(ItemType new_item)
{
	ItemType item_at_back = conveyor.back();
	conveyor.pop_back();

	conveyor.push_front(new_item);

	// For each Station in conveyor call time_step()
	for (int i = 0; i < stations.size(); i++)
	{
		ItemType item = conveyor[i];
		ItemType new_conveyor_item = stations[i].time_step(item);
		conveyor[i] = new_conveyor_item;
	}

	return item_at_back;
}
