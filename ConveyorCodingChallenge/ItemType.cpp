#include "ItemType.h"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const ItemType& item)
{
	switch (item)
	{
		case ItemType::MT:
			std::cout << "MT";
		break;

		case ItemType::A:
			std::cout << "A";
		break;

		case ItemType::B:
			std::cout << "B";
		break;

		case ItemType::C:
			std::cout << "C";
		break;

		case ItemType::P:
			std::cout << "P";
		break;

		case ItemType::Q:
			std::cout << "Q";
		break;
	}
	return os;
}