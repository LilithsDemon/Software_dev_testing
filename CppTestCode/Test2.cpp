#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    int nums[] = {12, 45, 32, 37, 63, 57, 66, 72, 17};

    int nums_length = sizeof(nums)/sizeof(nums[0]);

    int largest_number = 0;
    int smallest_number = 100;

    for (int i = 0; i < nums_length; i++)
    {
        if (largest_number < nums[i])
        {
            largest_number = nums[i];
        }
        if (smallest_number > nums[i])
        {
            smallest_number = nums[i];
        }
    }

    cout << "Largest number is: " << largest_number << ": Smallest number is: " << smallest_number;

    cout << "\nCheck number is in array: ";
    int user_num = 0;
    cin >> user_num;
    bool in_array = false;
    for (int i=0; i < nums_length; i++)
    {
        if(user_num == nums[i])
        {
            in_array = true;
        }
    }
    if (in_array == true)
    {
        cout << "The number " << user_num << " is in the array";
    }
}    