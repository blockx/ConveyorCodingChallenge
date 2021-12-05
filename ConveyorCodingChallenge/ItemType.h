#ifndef __ITEMTYPE_H__
#define __ITEMTYPE_H__

#include <iostream>

enum class ItemType
{
	MT,
	A,
	B,
	C,
	P,
	Q
};

std::ostream& operator << (std::ostream& os, const ItemType& obj);

#endif // ndef __ITEMTYPE_H__