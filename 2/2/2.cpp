#include <iostream>
#include <vector>

using namespace std;



template <class T>
class Table {
public:

	Table(int r, int c) : rows(r), cols(c)
	{
		table = (T**) new int [r * sizeof(int*)];
		for (int i = 0; i < r; i++)
			table[i] = new int[c * sizeof(int)];

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				table[i][j] = i * j;
			}
		}
	}
	class Row
	{
	public:
		Row(int* a):temp(a){}
		T& operator[](int a)
		{
			return temp[a];
		}
		const T& operator[](int a) const
		{
			return temp[a];
		}
		T* temp;
	};

	Row operator [] (int i)
	{
		return Row(table[i]);
	}
	const Row operator [] (int i) const
	{
		return Row(table[i]);
	}


	size_t size() const { return rows * cols; }

private:

	T** table;
	int rows, cols;
};

int main()
{
	auto test = Table<int>(2, 3);
	test[0][0] = 4;
	std::cout << test[0][0]<<endl; // выводит 4
	cout << test.size();
}
