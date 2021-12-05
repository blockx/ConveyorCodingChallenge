#ifndef __LOADER_H__
#define __LOADER_H__

#include "SimBase.h"
#include "ItemType.h"

class Loader : public SimBase
{
public:
	ItemType time_step(ItemType) { return time_step(); }

private:
	ItemType time_step();
};

#endif // ndef __LOADER_H__