#include <iostream>
#include <string>

int calculate(int num)
{
    if(num > 50)
    {
       num = num-50;
       num = num * 3;
    }
    else
    {
        num = num-50;
    }
    
    return num;
}

int main()
{
    int user_num = 0;
    std::cout << "Please enter a number: ";
    std::cin >> user_num;
    std::cout << "\nOutput value: " << abs(calculate(user_num)) << "\n";
}
