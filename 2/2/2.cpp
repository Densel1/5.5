#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

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
//	cout << rows << endl << cols << endl;
	}
	int rows, cols;

	class Row
	{
	public:
		int r;
		Row(int* a, int Rows):temp(a) { r = Rows; }

		T& operator[](int a)
		{
			if (a<0 || a>r) throw invalid_argument("Wrong index");
			cout << "rows " << r << endl;
			return temp[a];
		}
		const T& operator[](int a) const
		{
			if (a<0 || a>r) throw invalid_argument("Wrong index");
			cout << "rows " << r << endl;
			return temp[a];
		}
		T* temp;
	};

	Row operator [] (int i)
	{
		if (i < 0 || i > cols) throw invalid_argument("Wrong index");
		return Row(table[i], rows);
	}
	const Row operator [] (int i) const
	{
		if (i < 0 || i > cols) throw invalid_argument("Wrong index");
		return Row(table[i]);
	}


	size_t size() const { return rows * cols; }



private:

	T** table;
};

int main()
{
	try {
		int my_row = 0;
		auto test = Table<int>(2, 3);
		test[0][my_row] = 4;
		std::cout << test[0][my_row] << endl; // выводит 4
		cout << test.size();
	}
	catch (const std::invalid_argument& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	};
}
