#include "ProductionLine.h"
#include "ItemType.h"

ItemType ProductionLine::time_step()
{
	ItemType new_item = loader.time_step();
	ItemType item_off_conveyor = conveyor.time_step(new_item);

	return item_off_conveyor;
}