#pragma once
#include <vector>

class get_count
{
	public:
		int count = 0;
	int operator () (std::vector<int> v)
	{
		for (auto i : v)
			count += (i % 3 == 0);
		return count;
	}
};

