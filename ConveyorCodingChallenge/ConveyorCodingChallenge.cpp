// ConveyorCodingChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ProductionLine.h"
#include "ItemType.h"

#include <iostream>

int main()
{
    int c_MT = 0;
    int c_A = 0;
    int c_B = 0;
    int c_C = 0;
    int c_P = 0;
    int c_Q = 0;

    ProductionLine production_line;
    for (int tsc = 0; tsc < 100; tsc++)
    {
        ItemType item_off_conveyor = production_line.time_step();

        switch (item_off_conveyor)
        {
            case ItemType::MT:
                c_MT++;
            break;

            case ItemType::A:
                c_A++;
            break;

            case ItemType::B:
                c_B++;
            break;

            case ItemType::C:
                c_C++;
            break;

            case ItemType::P:
                c_P++;
            break;

            case ItemType::Q:
                c_Q++;
            break;
        }
    }

    std::cout << "MT count" << " " << c_MT << "\t";
    std::cout << "A count" << " " << c_A << "\t";
    std::cout << "B count" << " " << c_B << "\t";
    std::cout << "C count" << " " << c_C << "\t";
    std::cout << "P count" << " " << c_P << "\t";
    std::cout << "Q count" << " " << c_Q << std::endl;
}
