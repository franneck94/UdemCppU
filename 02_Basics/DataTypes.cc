#include <cstdint>
#include <iostream>

int main()
{
    auto ui1 = std::uint8_t{-1};
    auto ui2 = std::uint16_t{1};
    auto ui3 = std::uint32_t{1};
    auto ui4 = std::uint64_t{1};

    auto i1 = std::uint8_t{1};
    auto i2 = std::uint16_t{1};
    auto i3 = std::uint32_t{1};
    auto i4 = std::uint64_t{1};

    auto letter_a = char{'A'};
    std::cout << letter_a << std::endl;
    std::cout << static_cast<std::int32_t>(letter_a) << std::endl;

    auto letter_a2 = char{'A' + 3};
    std::cout << letter_a2 << std::endl;
    std::cout << static_cast<std::int32_t>(letter_a2) << std::endl;

    auto check = (letter_a >= 0 && letter_a <= 10);
    std::cout << std::boolalpha << check << std::endl;

    auto check2 = !(letter_a >= 0 && letter_a <= 10);
    std::cout << std::boolalpha << check2 << std::endl;

    auto f1 = float{1337.0F};
    auto f2 = double{1337.0F};

    return 0;
}
