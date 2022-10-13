#include <iostream>

int main()
{
    int numbers[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9, 10, 11, 12}
    };

    std::cout << numbers[1][1];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << "\n";
    }

    ////////////////////////////////////

    int iNums[2][4] = {
        {2, 4, 5, 6},
        {4, 5, 2, 6}
    };

    int total_num = 0;

    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 4; j++)
        {
            total_num = total_num + iNums[i][j];
        }
    }

    std::cout << total_num << "\n";

    int new_nums[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {2, 2, 2}
    };

    if (new_nums[0][1] == new_nums[1][1] && new_nums[1][1] == new_nums[2][1])
    {
        std::cout << "All middle numbers are the same\n\n";
    }

    int sort_nums[2][3] = {
        {25,12,22},
        {6,99,29}
    };

    bool loop = true;
    for (int i = 0; i < 2; i++)
    {
        loop = true;
        while (loop == true)
        {
            loop = false;
            for (int j = 0; j < 3-1; j++)
            {
                if(sort_nums[i][j] < sort_nums[i][j+1])
                {
                    int tmp = sort_nums[i][j];
                    sort_nums[i][j] = sort_nums[i][j+1];
                    sort_nums[i][j + 1] = tmp;
                    loop = true;
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << sort_nums[i][j] << "\t";
        }
        std::cout << "\n";
    }

}