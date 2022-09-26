#include <cstdint>
#include <iostream>

bool game(std::int32_t lower_bound, std::int32_t upper_bound)
{
    std::int32_t temp = 0;
    std::uint32_t user_input = 0;

    while (true)
    {
        std::cout << "Please enter a value in the range [" << lower_bound
                  << ", " << upper_bound << "]: ";
        std::cin >> temp;

        bool check1 = temp < lower_bound;
        bool check2 = temp > upper_bound;
        if (check1 || check2)
        {
            std::cout << "Incorrect input\n";
            return false;
        }
        else
        {
            user_input = temp;
        }

        std::cout << "You entered: " << user_input << std::endl;
    }

    return true;
}

int main()
{
    game(0, 5);

    return 0;
}
