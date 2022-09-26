#include <cstdint>
#include <iostream>

// enum: Enumeration

enum class Lane
{
    RIGHT_LANE,
    LEFT_LANE,
    CENTER_LANE,
};

enum class OvertakingLane
{
    RIGHT_LANE,
    LEFT_LANE,
};

int main()
{
    Lane lane1 = Lane::CENTER_LANE;

    switch (lane1)
    {
    case Lane::RIGHT_LANE:
    {
        std::cout << "RIGHT_LANE\n";
        break;
    }
    case Lane::CENTER_LANE:
    {
        std::cout << "CENTER_LANE\n";
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "LEFT_LANE\n";
        break;
    }
    }

    return 0;
}
