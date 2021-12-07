#ifndef __WORKER_H__
#define __WORKER_H__

#include "ItemType.h"

class Worker
{
public:
	Worker() : item(ItemType::MT), state(WaitingState::ready){ ; }

	// Pass item on conveyor before work commences, returns item on conveyor after work done by this worker
	ItemType time_step(const ItemType conveyor_place_item);

private:
	ItemType item;

	enum class WaitingState
	{
		ready,
		busy_1,
		busy_2,
		busy_3,
		put_item
	} state;
};

#endif // ndef __WORKER_H__
