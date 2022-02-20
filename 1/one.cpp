#include <iostream>

int main(int argc, char const *argv[])
{
    int input [4] = {10, 15, 3 ,7};
    int k = 17;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(input[i] + input[j] == k) {
                std::cout << input[i] << " and " << input[j] << " makes " << k << std::endl;
                return 0;
            }

        }        
    }
        return 0;
}
