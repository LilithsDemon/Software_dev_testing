#include <iostream>
#include <vector>
#include <cstdlib> 

int main()
{
    std::vector<int> numbers;
    for (int i = 0; i < 15; i++)
    {
        numbers.push_back(rand() % 100);
    }
    for(int i=0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ,";
    }

    bool sorted = false;
    int iteration = 0;
    std::vector<int> sorted_list;
    while(sorted == false)
    {
        sorted = true;
        std::vector<int> clone_numbers = numbers;
        sorted_list.clear();

        for(int i = 0; i < numbers.size(); i++)
        {
            int pos =(rand() % clone_numbers.size());
            sorted_list.push_back(clone_numbers[pos]);
            clone_numbers.erase(clone_numbers.begin() + pos);
        }
        iteration = iteration + 1;
        for(int i = 1; i < sorted_list.size(); i++)
        {
            if(sorted_list[i - 1] > sorted_list[i])
            {
                sorted = false;
            }
        }
    }

    std::cout << "\nFinally sorted, took " << iteration << " times\n";
    for(int i=0; i < sorted_list.size(); i++)
    {
        std::cout << sorted_list[i] << " ,";
    }
}