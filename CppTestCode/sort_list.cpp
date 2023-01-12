#include <iostream>
#include <list>

int main()
{
    std::list<int>  new_list = {10, 6, 23, 19, 8};
    std::list<int>::iterator it = new_list.begin();

    std::list<int>::iterator outputIt;
    std::list<int>::iterator lastIt;
    bool found = false;
    while(found == false)
    {
        found = true;
        outputIt = new_list.begin();
        advance(outputIt, 1);
        for(outputIt; outputIt != new_list.end(); outputIt ++)
        {
            lastIt = outputIt;
            lastIt--;
            if(*outputIt < *lastIt)
            {
                int tmp = *outputIt;
                *outputIt = *lastIt;
                *lastIt = tmp;
                found = false;
            }
        }
    }
    std::list<int>::iterator getIt;
    for(getIt = new_list.begin(); getIt != new_list.end(); getIt ++)
    {
        std::cout << *getIt << std::endl;
    }
}