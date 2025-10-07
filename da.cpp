#include <iostream>
#include <string>
using std::cout;
using std::string;

class DynamicArray
{
	int* array = NULL;
	int array_size = 0;
	int capacity = 0;

public:

	DynamicArray(const int initial_capacity, const int capacity_increment);
	DynamicArray(const int initial_capacity);
	DynamicArray();
	DynamicArray(const DynamicArray& other);
	DynamicArray& operator = (const DynamicArray& other);
	~DynamicArray();
	bool insert(const int value);
	bool insert(const int index, const int value);
	bool remove(const int index);
	bool remove();
	bool append(const int value);
	int& operator [] (int index);
	int get(const int index);
	bool set(const int index, const int value);
	void print();
};

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		std::string test = argv[1];
		DynamicArray a(5, 5);

		if (test == "000")
		{
			a.insert(0, 0);
			a.print();	//Should print 0
		}

		if (test == "001")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.insert(4, 4);
			a.print();	//Should print 0 1 2 3 4
		}

		if (test == "002")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 3);
			a.insert(3, 4);
			a.insert(2, 2);
			a.print();	//Should print 0 1 2 3 4
		}

		if (test == "003")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.append(4);
			a.print();	//Should print 0 1 2 3 4
		}

		if (test == "004")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.insert(4, 4);
			a.remove();
			a.print();	//Should print 0 1 2 3
		}

		if (test == "005")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.insert(4, 4);
			a.remove(2);
			a.print();	//Should print 0 1 3 4
		}

		if (test == "006")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.insert(4, 4);
			a.set(2, 5);
			a.print();	//Should print 0 1 5 3 4
		}

		if (test == "007")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 2);
			a.insert(3, 3);
			a.insert(4, 4);
			cout << a.get(2) << "\n"; //Should print 2
		}

		if (test == "008")
		{
			a.insert(0, 0);
			a.insert(1, 1);
			a.insert(2, 3);
			a.insert(3, 4);
			a.insert(2, 2);
			a.print();	//Should print 0 1 2 3 4
		}

		if (test == "009")
		{
			for (int i = 0; i < 5; i++)
			{
				a.insert(i);
			}
			a.print();	//Should print 4 3 2 1 0
		}

		if (test == "010")
		{
			for (int i = 0; i < 8; i++)
			{
				a.insert(i);
			}
			a.print();	//Should print 7 6 5 4 3 2 1 0
		}

		if (test == "011")
		{
			for (int i = 0; i < 8; i++)
			{
				a.insert(i);
			}

			DynamicArray b = a;
			b.print();	//Should print 7 6 5 4 3 2 1 0
		}

		if (test == "012")
		{
			for (int i = 0; i < 8; i++)
			{
				a.insert(i);
			}

			DynamicArray b(1, 1);
			b = a;
			b.print();	//Should print 7 6 5 4 3 2 1 0
		}

		if (test == "013")
		{
			for (int i = 0; i < 8; i++)
			{
				a.insert(i);
				cout << a[i] << " ";	//Should print 0 0 0 0 0 0 0 0
			}
			cout << "\n";
		}
		
		return 0;
	}

	return 0;
}

DynamicArray::DynamicArray(const int initial_capacity, const int capacity_increment) {}
DynamicArray::DynamicArray(const int initial_capacity) {}
DynamicArray::DynamicArray() {}
DynamicArray::DynamicArray(const DynamicArray& other) {}
DynamicArray& DynamicArray::operator = (const DynamicArray& other) {}
DynamicArray::~DynamicArray() {}
bool DynamicArray::insert(const int value) {}
bool DynamicArray::insert(const int index, const int value) {}
bool DynamicArray::remove(const int index) {}
bool DynamicArray::remove() {}
bool DynamicArray::append(const int value) {}
int& DynamicArray::operator [] (int index) {}	//Bonus
int DynamicArray::get(const int index) {}
bool DynamicArray::set(const int index, const int value) {}

void DynamicArray::print() {}
