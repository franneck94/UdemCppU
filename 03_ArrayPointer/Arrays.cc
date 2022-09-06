#include <iostream>

// dType varName[numElements]

int main()
{
    int array1[5] = {10, 11, 12, 13, 14};

    std::cout << "Index 0: " << array1[0] << std::endl;
    std::cout << "Index 1: " << array1[1] << std::endl;
    std::cout << "Index 2: " << array1[2] << std::endl;
    std::cout << "Index 3: " << array1[3] << std::endl;
    std::cout << "Index 4: " << array1[4] << std::endl;

    int array2[] = {20, 21, 22};

    std::cout << "Index 0: " << array2[0] << std::endl;
    std::cout << "Index 1: " << array2[1] << std::endl;
    std::cout << "Index 2: " << array2[2] << std::endl;

    float user_balances[10] = {};

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Balances[i]: " << user_balances[i] << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        user_balances[i] = i * 10.0f;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Balances[i]: " << user_balances[i] << std::endl;
    }

    int my_matrix2[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << my_matrix2[i][j] << std::endl;
        }
    }

    return 0;
}
