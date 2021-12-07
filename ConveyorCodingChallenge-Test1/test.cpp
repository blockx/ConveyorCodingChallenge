#include "pch.h"

#include "..\ConveyorCodingChallenge\Worker.h"
#include "..\ConveyorCodingChallenge\ItemType.h"

TEST(WorkerTest, MT_Test)
{
	Worker w1;

	ItemType item_in = ItemType::MT;
	for (int i = 0; i < 10; i++)
	{
		ItemType item_out = w1.time_step(item_in);
		EXPECT_EQ(ItemType::MT, item_out);
	}
}

TEST(WorkerTest, Single_A_Test)
{
	Worker w1;

	ItemType item_out = w1.time_step(ItemType::A);
	EXPECT_EQ(ItemType::MT, item_out);

	for (int i = 0; i < 10; i++)
	{
		item_out = w1.time_step(ItemType::MT);
		EXPECT_EQ(ItemType::MT, item_out);
	}
}

TEST(WorkerTest, Indefinite_A_Test)
{
	Worker w1;

	ItemType item_out = w1.time_step(ItemType::A);
	EXPECT_EQ(ItemType::MT, item_out);

	for (int i = 0; i < 10; i++)
	{
		ItemType item_out = w1.time_step(ItemType::A);
		EXPECT_EQ(ItemType::A, item_out);
	}
}

TEST(WorkerTest, A_Then_B_Test)
{
	Worker w1;

	ItemType item_out = w1.time_step(ItemType::A);
	EXPECT_EQ(ItemType::MT, item_out);

	item_out = w1.time_step(ItemType::B);
	EXPECT_EQ(ItemType::MT, item_out);

	for (int i = 0; i < 3; i++)
	{
		item_out = w1.time_step(ItemType::MT);
		EXPECT_EQ(ItemType::MT, item_out);
	}

	item_out = w1.time_step(ItemType::MT);
	EXPECT_EQ(ItemType::P, item_out);

	for (int i = 0; i < 10; i++)
	{
		item_out = w1.time_step(ItemType::MT);
		EXPECT_EQ(ItemType::MT, item_out);
	}
}

/* ... and so on...*/

#include "..\ConveyorCodingChallenge\ProductionLine.h"

TEST(ProductionLineTest, MT_Test)
{
	ProductionLine pl1;

	for (int i = 0; i < 8; i++)
	{
		ItemType item_off = pl1.time_step();
		EXPECT_EQ(ItemType::MT, item_off);
	}
}

/* ... and so on...*/
