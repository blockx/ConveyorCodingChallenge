#ifndef __STATION_H__
#define __STATION_H__

#include "SimBase.h"
#include "ItemType.h"
#include "Worker.h"

class Station : public SimBase
{
public:
	ItemType time_step(ItemType conveyor_place_state);

 private:
	Worker w1;
	Worker w2;
};

#endif // ndef __STATION_H__
