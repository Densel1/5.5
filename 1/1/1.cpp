
#include <iostream>
#include <vector>

using namespace std;


template<class T>
T Power(T a)
{
	return a * a;
}

template<>
vector<int> Power(vector<int> v)
{

	for (int i = 0; i < v.size(); ++i) {
		v[i] = v[i] * v[i];
	}
	return v;
}

void PrintVector(vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if (i != 0) cout << ", ";
		cout << v[i];
	}
	cout << endl;
}

int main()
{
	int i1 = 4;
	cout << "[IN]: " << i1 << endl;
	cout << "[OUT]: " << Power(i1) << endl;
	vector<int> v;
	v.push_back(-1);
	v.push_back(4);
	v.push_back(8);

	cout << "[IN]: ";
	PrintVector(v);
    vector<int> c = Power(v);
	cout << "[OUT]: ";
	PrintVector(c);
}
