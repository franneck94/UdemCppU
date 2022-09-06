#include <cstdint>
#include <iostream>

enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

void print_lane_data(const Lane &lane)
{
    switch (lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

int main()
{
    const auto l1 = Lane::CENTER_LANE;
    print_lane_data(l1);

    return 0;
}
