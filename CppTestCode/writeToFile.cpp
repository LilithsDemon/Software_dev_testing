#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void task1()
{
    std::ofstream file("1-100.csv");
    
    for(int i = 0; i < 100; i++)
    {
        if(i + 1 != 100)
        {
            file << i+1 << "\n";
        }
        else
        {
            file << i+1;
        }
    }
    file.close();
}

void task2()
{
    std::ofstream file("1-100_2.csv");
    
    for(int i = 0; i < 100; i++)
    {
        if((i+1) % 10 != 0)
        {
            file << i+1 << ",";
        }
        else if(i+1 != 100)
        {
            file << i+1 << "\n";
        }
        else
        {
            file << i+1;
        }
    }
    file.close();
}

void task3()
{
    std::ofstream file("1-100_3.csv");
    bool prime = true;
    
    for(int x = 1; x < 101; x++)
    {
        prime = true;
        if(x > 1)
        {
            for(int y = 2; y < x; y++)
            {
                if(x % y == 0)
                {
                    prime = false;
                }
            }
            if(prime == true)
            {
                file << x << "\n";
            }
        }
    }
    file.close();
}

int main()
{
    task1();
    task2();
    task3();
    return 0;
}