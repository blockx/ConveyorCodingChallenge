#include "Station.h"
#include "ItemType.h"

// Call time_step() for the workers w1 and w2 returning the new item of the conveyor station accordingly 
ItemType Station::time_step(ItemType conveyor_place_item)
{
	// Algorithm to use to decide which worker on a station to go first is not determined by spec 
	 ItemType new_state = w1.time_step(conveyor_place_item);

	 if (new_state == conveyor_place_item)	// if conveyor_place_item was not altered by worker w1 let w2 have a go
	 {
		 new_state = w2.time_step(conveyor_place_item);
	 }

	 return new_state;
}
