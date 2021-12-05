#ifndef __PRODUCTIONLINE_H__
#define __PRODUCTIONLINE_H__

#include "Conveyor.h"
#include "Loader.h"

class ProductionLine : public SimBase
{
public:
	ItemType time_step(ItemType) { return time_step(); }

private:
	ItemType time_step();

	Conveyor conveyor;
	Loader loader;
};

#endif // ndef __PRODUCTIONLINE_H__
