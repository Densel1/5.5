
#include <iostream>
#include <vector>
#include "get_sum.h"
#include "get_count.h"

int main()
{
    std::vector<int> v = { 4,1,3,6,25,54 };
    std::cout << "[IN]: ";
    for (int i = 0; i< v.size(); ++i)
    {
        if (i != 0) std::cout << ", ";
        std::cout << v[i];
    }
    get_sum sum;
    std::cout << std::endl << "[OUT]: get_sum = " << sum(v);
    get_count count;
    std::cout << std::endl << "[OUT]: get_count = " << count(v) << std::endl;
}

