#ifndef __WORKER_H__
#define __WORKER_H__

#include "SimBase.h"
#include "ItemType.h"

class Worker : public SimBase
{
public:
	Worker() { item = ItemType::MT; state = WaitingState::ready; }

	ItemType time_step(ItemType conveyor_item);

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
