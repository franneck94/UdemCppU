#include <iostream>

int main()
{
    for (int i = 2; i < 10; i += 2)
    {
        std::cout << i << std::endl;
    }

    int sum = 10;

    do
    {
        std::cout << "\nCurrent sum: " << sum << " Enter the next value: ";
        int input;
        std::cin >> input;

        sum += input;
    } while (sum < 10);

    return 0;
}
