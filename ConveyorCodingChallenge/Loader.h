#ifndef __LOADER_H__
#define __LOADER_H__

#include "ItemType.h"

class Loader
{
public:
	// Generates a random item each time it is called
	ItemType time_step();
};

#endif // ndef __LOADER_H__