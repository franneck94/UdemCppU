#include <cstdint>
#include <iostream>

int main()
{
    std::uint32_t i = 0;

    std::cout << "Please enter a value: ";
    std::cin >> i;

    std::cout << "You entered: " << i << std::endl;

    return 0;
}
