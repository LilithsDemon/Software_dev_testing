#include <iostream>
#include <array>

int main()
{
    int list[10] = {5, 6, 7, 9, 10, 14, 16, 17, 22, 21};
    for(int i = 0; i < (sizeof(list) / sizeof(int)); i++)
    {
        for(int j = 0; j < (sizeof(list)/sizeof(int)); j++)
        {
            std::cout << list[i] << std::endl;
        }
    }
}