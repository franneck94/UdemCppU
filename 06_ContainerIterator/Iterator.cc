#include <iostream>
#include <list>
#include <numeric>
#include <vector>

int main()
{
    auto my_vector = std::vector<int>(5, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    // ForwardIterator
    auto it1 = my_vector.begin();
    auto it2 = my_vector.end();

    for (; it1 != it2; ++it1)
    {
        std::cout << *it1 << " " << &(*it1) << " " << &it1 << std::endl;
    }
    std::cout << std::endl;

    // Const ForwardIterator
    auto it3 = my_vector.cbegin();
    auto it4 = my_vector.cend();

    for (; it3 != it4; ++it3)
    {
        std::cout << *it3 << " " << &(*it3) << " " << &it3 << std::endl;
        // *it3 = 10;
    }
    std::cout << std::endl;

    // BidirectionalIterator
    auto it5 = my_vector.rbegin();
    auto it6 = my_vector.rend();

    for (; it5 != it6; ++it5)
    {
        std::cout << *it5 << " " << &(*it5) << " " << &it5 << std::endl;
    }
    std::cout << std::endl;

    // Const BidirectionalIterator
    auto it7 = my_vector.crbegin();
    auto it8 = my_vector.crend();

    for (; it7 != it8; ++it7)
    {
        std::cout << *it7 << " " << &(*it7) << " " << &it7 << std::endl;
    }
    std::cout << std::endl;

    return 0;
}