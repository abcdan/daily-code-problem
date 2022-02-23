#include <iostream>
#include <array>
#include <iterator>

int main(int argc, char const *argv[])
{
    int input[4] = {3, 4, -1, 1};

    int n = sizeof(input) / sizeof(input[0]);
    std::sort(input, input + n);

    int last;
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            last = input[i];
            continue;
        }

        if ((input[i] - last != 1) && (input[i] - last != 0))
        {
            std::cout << "It's " << input[i] + 1 << std::endl;
            break;
        }
    }
    return 0;
}
