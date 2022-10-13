#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

string outputList(vector<int> list, int array_length)
{
   string output = "";

   for (int i = 0; i < array_length; i++)
   {
      output = output + to_string(list[i]) + ", ";
   }
   output = output + "\n";
   return output;
}

int main()
{

   int len_nums = 0;
   bool array = false;

   
   int array_length = 0;
   bool active = true;
   int input = 0;
   int output = 0;

   vector<int> nums;

   while (active == true)
   {
      if (array == false)
      {
         cout << "____ Menu ____\n";
         cout << "1: Create an array\n";
         cout << "2: Ouput fibbonacci sequence\n";
         cout << "3: Quit\n";
         cout << "Function to perform: ";
         
         cin >> input;

         switch(input)
         {
            case 1:
            {
               cout << "Please enter Length of array: ";
               cin >> len_nums;

               int current_val = 0;

               for (int i = 0; i < len_nums; i++)
               {
                  cout << "Please enter a value for pos " << (i + 1) << ": ";
                  cin >> current_val;
                  nums.push_back(current_val);
               }

               cout << "\nunsorted: " << outputList(nums, nums.size());

               bool run = true;
               while (run == true)
               {
                  run = false;
                  for (int i = 1; i < len_nums; i++)
                  {
                     if (nums[i] > nums[i - 1])
                     {
                        int temp = nums[i - 1];
                        nums[i - 1] = nums[i];
                        nums[i] = temp;
                        run = true;
                     }
                  }
               }

               cout << "Sorted " << outputList(nums, nums.size()) << "\n";
               array = true;
               break;
            }
            case 2:
            {
               cout << "\nHow many values would you like to print: ";

               int vals = 0;
               cin >> vals;
               int fib[vals];

               fib[0] = 0;
               fib[1] = 1;

               for (int i = 2; i < vals; i++)
               {
                  fib[i] = fib[i - 2] + fib[i - 1];
               }

               for (int i = 0; i < vals; i++)
               {
                  if (i != vals - 1)
                  {
                     cout << fib[i] << ", ";
                  }
                  else
                  {
                     cout << fib[i] << "\n\n";
                  }
               }
               break;
            }
            case 3:
            {
               active = false;
               break;
            }
            default:
            {
               cout << "Invalid selection, try again: \n";
               break;
            }
         }
      }
      if (array == true)
      {
         cout << "____ Menu ____\n";
         cout << "1: Add the numbers\n";
         cout << "2. Only add odd numbers\n";
         cout << "3. Only add even numbers\n";
         cout << "4. Only add prime numbers\n";
         cout << "5: Quit\n";
         cout << "Function to perform: ";

         cin >> input;

         switch (input)
         {
            case 1:
               for (int i = 0; i < array_length; i++)
               {
                  output = output + nums[i];
               }
               break;
            case 2:
               for (int i = 0; i < array_length; i++)
               {
                  if (nums[i] % 2 == 1)
                  {
                     output = output + nums[i];
                  }
               }
               break;
            case 3:
               for (int i = 0; i < array_length; i++)
               {
                  if (nums[i] % 2 == 0)
                  {
                     output = output + nums[i];
                  }
               }
               break;
            case 4:
               for (int i = 0; i < array_length; i++)
               {
                  bool is_prime = true;
                  if (nums[i] == 0 || nums[i] == 1)
                  {
                     is_prime = false;
                  }

                  for (int j = 2; j < nums[i]; j++)
                  {
                     if (nums[i] % j == 0)
                     {
                        is_prime = false;
                        break;
                     }
                  }
                  if (is_prime == true)
                  {
                     output = output + nums[i];
                  }
               }
               break;
            case 5:
               active = false;
               break;
            default:
               cout << "Invalid selection, try again: \n";
         }
         if (active == true)
         {
            cout << "\nValue is: " << to_string(output) << "\n";
         }
      }
   }
}