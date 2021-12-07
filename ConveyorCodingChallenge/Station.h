#ifndef __STATION_H__
#define __STATION_H__

#include "ItemType.h"
#include "Worker.h"

class Station
{
public:
	// Pass the existing item on the conveyor, returns the new item on the conveyor place
	ItemType time_step(const ItemType conveyor_place_item);

 private:
	Worker w1;
	Worker w2;
};

#endif // ndef __STATION_H__
