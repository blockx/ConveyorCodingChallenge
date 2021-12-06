#include "pch.h"

#include "..\ConveyorCodingChallenge\SimBase.h"
#include "..\ConveyorCodingChallenge\Worker.h"
#include "..\ConveyorCodingChallenge\ItemType.h"

#include <iostream>

TEST(TestCaseName, TestName)
{
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(WorkerTest, MTTest)
{
//	Worker w1;
	ItemType item_in = ItemType::MT;
//	ItemType item_out = w1.time_step(item_in);

//	EXPECT_EQ(item_in, item_out);
}
