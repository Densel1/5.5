#pragma once
#include <vector>

class get_sum
{
private:

	int sum;
public:
	get_sum() :sum(0) {}
	int getSum() { return sum; }

	int operator () (const int &v)
	{
		if(v % 3 == 0) sum += v;
		return sum;
	}
};

