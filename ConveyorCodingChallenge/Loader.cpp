#include "Loader.h"
#include "ItemType.h"

#include <random>

// Loader time_step() generates a random item each time it is called
// Probabilities of generating each item type are given in spec.
ItemType Loader::time_step()
{
    ItemType s = ItemType::MT;

    std::random_device rd;
    std::mt19937 generator(rd());
 
    std::uniform_int_distribution<int> distr(0, 4);
    int i = distr(generator);

    switch (i)
    {
        case 0:
            s = ItemType::MT;       // P(MT) == 1/5
        break;

        case 1:
        case 2:                     // fall through
            s = ItemType::A;        // P(A) == 2/5
        break;

        case 3:
            s = ItemType::B;        // P(B) == 1/5
        break;

        default: // case 4:
            s = ItemType::C;        // P(C) == 1/5
    }

    return s;
}
