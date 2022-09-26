#include <cstdint>
#include <iostream>

// enum: Enumeration

enum class Lane
{
    RIGHT_LANE,
    LEFT_LANE,
    CENTER_LANE,
};

struct Vehicle
{
    std::uint32_t id;
    float velocity;
    Lane lane;
};

void print_vehicle_info(Vehicle vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity (kph): " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
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
}

int main()
{
    Vehicle v1 = {.id = 1, .velocity = 100.0F, .lane = Lane::LEFT_LANE};
    print_vehicle_info(v1);

    return 0;
}
