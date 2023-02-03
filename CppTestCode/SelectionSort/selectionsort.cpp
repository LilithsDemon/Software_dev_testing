#include<iostream>
#include<vector>
#include <cstdlib>

int main()
{
    std::vector<int> numbers;

    for (int i = 0; i < 100; i++)
    {
        numbers.push_back(rand() % 100);
    }

    for(int i=0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ,";
    }

    std::vector<int> sortedNums;

    for(int i=0; i < numbers.size(); i++)
    {
        if(i == 0)
        {
            sortedNums.push_back(numbers[i]);
        }
        else
        {
            if(numbers[i] <= sortedNums[0])
            {
                sortedNums.insert(sortedNums.begin(), numbers[i]);
            }
            else
            {
                bool pos = false;
                for(int x = 1; x < sortedNums.size(); x++)
                {
                    if(numbers[i] < sortedNums[x])
                    {
                        pos = true;
                        sortedNums.insert(sortedNums.begin() + x, numbers[i]);
                        break;
                    }
                }
                if(pos == false)
                {
                    sortedNums.push_back(numbers[i]);
                }
            }
        }
    }

    std::cout << "\n";

    for(int i=0; i < sortedNums.size(); i++)
    {
        std::cout << sortedNums[i] << " ,";
    }


}