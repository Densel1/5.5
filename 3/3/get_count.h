#pragma once
#include <vector>

class get_count
{
	public:
		int count = 0;
		int getCount()
		{
			return count;
		}
	void operator () (int v)
	{
			if (v % 3 == 0) count++ ;
	//	return count;
	}
};

