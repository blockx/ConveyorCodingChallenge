#include "Worker.h"
#include "ItemType.h"

// Pass item on conveyor before work commences, returns item on conveyor after work done by this worker
// Modifies item of Worker 
ItemType Worker::time_step(const ItemType conveyor_place_item)
{
	ItemType new_conveyor_item = conveyor_place_item;	// Leave conveyor unaltered if we can't use it

	switch (state)
	{
		case WaitingState::ready:
			switch (item)
			{
				case ItemType::MT:		// If MT can use an A, a B or a C
					if ((conveyor_place_item == ItemType::A) || (conveyor_place_item == ItemType::B) || (conveyor_place_item == ItemType::C))
					{
						item = conveyor_place_item;
						new_conveyor_item = ItemType::MT;
					}
				break;

				case ItemType::A:		// If we already had an A, can use a B or a C
					if (conveyor_place_item == ItemType::B)
					{
						item = ItemType::P;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
					else if (conveyor_place_item == ItemType::C)
					{
						item = ItemType::Q;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
				break;

				case ItemType::B:		// If we already had a B, can use an A or a C
					if (conveyor_place_item == ItemType::A)
					{
						item = ItemType::P;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
					else if (conveyor_place_item == ItemType::C)
					{
						item = ItemType::Q;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
				break;

				case ItemType::C:		// If we already had a C, can use an A or a B
					if (conveyor_place_item == ItemType::A)
					{
						item = ItemType::P;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
					else if (conveyor_place_item == ItemType::B)
					{
						item = ItemType::Q;
						new_conveyor_item = ItemType::MT;
						state = WaitingState::busy_1;
					}
				break;
			}
		break;

		case WaitingState::busy_1:
			state = WaitingState::busy_2;
		break;

		case WaitingState::busy_2:
			state = WaitingState::busy_3;
		break;

		case WaitingState::busy_3:
			state = WaitingState::put_item;
		break;

		case WaitingState::put_item:
			if (conveyor_place_item == ItemType::MT)
			{
				new_conveyor_item = item;
				state = WaitingState::ready;
				item = ItemType::MT;
			}
		break;
	}

	return new_conveyor_item;
}
