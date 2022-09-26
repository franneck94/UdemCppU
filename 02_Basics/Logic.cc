#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t temp = 0;
    std::uint32_t user_input = 0;


    std::cout << "Please enter a value in the range [0, 10]: ";
    std::cin >> temp;

    // && := und
    // || := oder
    // >, <, >=, <=, ==, !=

    bool check1 = temp < 0;
    bool check2 = temp > 10;
    if (check1 || check2)
    {
        std::cout << "Incorrect input\n";

        return 1;
    }
    else
    {
        user_input = temp;
    }

    std::cout << "You entered: " << user_input << std::endl;

    return 0;
}
