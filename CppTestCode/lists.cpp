#include <iostream>
#include <list>

int main()
{
    std::list<int>  new_list(5, 0);
    std::list<int>::iterator it = new_list.begin();
    advance(it, 1);
    *it = *it + 50;
    advance(it, 2);
    *it = *it + 70;

    std::list<int>::iterator outputIt;
    for(outputIt = new_list.begin(); outputIt != new_list.end(); outputIt ++)
    {
        std::cout << *outputIt << std::endl;
    }
}