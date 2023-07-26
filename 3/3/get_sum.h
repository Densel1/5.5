#pragma once
#include <vector>

class get_sum
{
private:
	int count = 0;
public:
	get_sum()
	{

	}
	int operator () (std::vector<int> &v)
	{
		for(auto i:v)
		{
			count += i * (i % 3 == 0);
		}
		return count;
	}
};

