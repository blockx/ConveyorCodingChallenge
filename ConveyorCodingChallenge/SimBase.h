#ifndef __SIMBASE_H__
#define __SIMBASE_H__

#include "ItemType.h"

// Derive from SimBase to force implementation of time_step()
class SimBase
{
	virtual ItemType time_step(ItemType) = 0;
};

#endif // ndef __SIMBASE_H__