#include <iostream>
using namespace std;

template <class U>
class LIFO_stack
{
	U* Array;
	int last_in_element;
	int total_capacity;

public:
	LIFO_stack(int size = 100);
	void insert(U);
	U extract();
	U peek();
};

template <class U>
LIFO_stack<U>::LIFO_stack(int size)
{
	Array = new U[size];
	total_capacity = size;
	last_in_element = -1;
}

template <class U>
void LIFO_stack<U>::insert(U x)
{
	cout << "Inserting " << x << endl;
	Array[++last_in_element] = x;
}

template <class U>
U LIFO_stack<U>::extract()
{
	cout << "Extracting " << peek() << endl;
	return Array[last_in_element--];
}

template <class U>
U LIFO_stack<U>::peek()
{
		return Array[last_in_element];
}



int main()
{
	srand(time(0));
	LIFO_stack<double> real_data(10);
	LIFO_stack<int> int_data(5);
	LIFO_stack<double> real_data_copy(10);

	
	for (int i = 0; i < 10; i++)
	{
	cout << "Real number insert" << endl;
	real_data.insert((double)rand() / RAND_MAX);
	cout << endl;
	cout << "Copying real number to another LIFO_stack" << endl;
	real_data_copy.insert(real_data.peek());
	cout << endl;
	}

	cout << endl;
	cout << "Integer insert" << endl;
	for (int i = 0; i < 5; i++)
	{
		
	int_data.insert((int)rand());
	}
	cout << endl;

	cout << "Real number extract" << endl;
	for (int i = 0; i < 10; i++)
	{
		real_data.extract();
	}
	cout << endl;

	cout << "Integer extract" << endl;
	for (int i = 0; i < 5; i++)
	{
		int_data.extract();
	}
	cout << endl;
	cout << "Removing copied real number from duplicate LIFO_stack" << endl;
	for (int i = 0; i < 10; i++)
	{
		real_data_copy.extract();
	}
	return 0;
}