#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>

int main(int argc, char const *argv[])
{
    int input[5] = {1, 2, 3, 4, 5};
    int output[5] = {0, 0, 0, 0, 0};

    for (size_t i = 0; i < 5; i++)
    {
        int number = 1;

        for (size_t j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            number = number * input[j];
        }

        output[i] = number;
    }

    std::cout << output[0] << std::endl;
    std::cout << output[1] << std::endl;
    std::cout << output[2] << std::endl;
    std::cout << output[3] << std::endl;
    std::cout << output[4] << std::endl;

    return 0;
}
