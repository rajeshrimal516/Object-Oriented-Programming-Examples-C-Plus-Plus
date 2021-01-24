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
	void insertion(U);
	U extraction();
	U peeking();
};

template <class U>
LIFO_stack<U>::LIFO_stack(int size)
{
	Array = new U[size];
	total_capacity = size;
	last_in_element = -1;
}

template <class U>
void LIFO_stack<U>::insertion(U x)
{
	cout << "Inserting " << x << endl;
	Array[++last_in_element] = x;
}

template <class U>
U LIFO_stack<U>::extraction()
{
	cout << "Extracting " << peeking() << endl;
	return Array[last_in_element--];
}

template <class U>
U LIFO_stack<U>::peeking()
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
	cout << "Real number insertion" << endl;
	real_data.insertion((double)rand() / RAND_MAX);
	cout << endl;
	cout << "Copying real number to another LIFO_stack" << endl;
	real_data_copy.insertion(real_data.peeking());
	cout << endl;
	}

	cout << endl;
	cout << "Integer insertion" << endl;
	for (int i = 0; i < 5; i++)
	{
		
	int_data.insertion((int)rand());
	}
	cout << endl;

	cout << "Real number Extraction" << endl;
	for (int i = 0; i < 10; i++)
	{
		real_data.extraction();
	}
	cout << endl;

	cout << "Integer Extraction" << endl;
	for (int i = 0; i < 5; i++)
	{
		int_data.extraction();
	}
	cout << endl;
	cout << "Removing copied real number from duplicate LIFO_stack" << endl;
	for (int i = 0; i < 10; i++)
	{
		real_data_copy.extraction();
	}
	return 0;
}