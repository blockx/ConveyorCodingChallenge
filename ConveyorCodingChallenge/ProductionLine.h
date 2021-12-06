#ifndef __PRODUCTIONLINE_H__
#define __PRODUCTIONLINE_H__

#include "Conveyor.h"
#include "Loader.h"

class ProductionLine
{
public:
	ItemType time_step();

private:
	Conveyor conveyor;
	Loader loader;
};

#endif // ndef __PRODUCTIONLINE_H__
