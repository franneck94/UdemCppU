#include <array>
#include <iostream>
#include <vector>

constexpr static auto ARRAY_LEN = 3U;

int main()
{
    const auto arr = std::array<int, ARRAY_LEN>{1, 2, 3};

    std::cout << arr.size() << '\n';
    std::cout << arr.empty() << '\n';

    for (const auto val : arr)
    {
        std::cout << val << ' ';
    }

    return 0;
}
