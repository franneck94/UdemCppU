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

    return 0;
}
