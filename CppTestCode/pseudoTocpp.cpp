#include <iostream>
#include <string>

int countEvenNumbers(int number)
{
    int count = 0;

    for(int i = 0; i < number; i++)
    {
        if(i % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    auto countEvenNumbersLambda = [] (int number)
    {
        int count = 0;
        for(int i = 0; i < number; i++)
        {
            if (i % 2 == 0)
            {
                count++;
            }
        }
        return ("\nCount using Lambda: " + std::to_string(count) + "\n\n");
    };

    int varNum = 0;
    std::cout << "Enter a number: ";
    std::cin >> varNum;

    std::cout << countEvenNumbersLambda(varNum);
    std::cout << "\nCount using function: " << countEvenNumbers(varNum) << "\n";
}
