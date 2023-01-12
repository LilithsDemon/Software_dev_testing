#include <iostream>

int main()
{
    int iNums[6] = {5, 6, 7, 8, 9, 1};
    bool found = false;
    while (found == false)
    for (int i = 0; i < iNums.length() - 1; i++)
    {   
        found == true;
        if (iNums[i] < iNums[i + 1])
        {
            tmp = iNums[i];
            iNums[i] = iNums[i + 1];
            iNums[i + 1] = tmp;
            found == false;
        }
    }
}
