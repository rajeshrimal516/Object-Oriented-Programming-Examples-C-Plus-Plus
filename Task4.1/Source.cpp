#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
void sortarray(T* array, int N)
{
	sort(array, array + N, greater<T>());
}

template<typename U>
void printarray(U* array, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n" << endl;
}

int main()
{
	srand(time(0));
	int* I;
	I = new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(I + i) = (int)(rand());
	}

	double* D;
	D = new double[10];
	for (int i = 0; i < 10; i++)
	{
		*(D + i) = (double) rand() / 8;
	}

	char* C;
	C = new char[10];
	for (int i = 0; i < 10; i++)
	{
		*(C + i) = 'a' + i;
	}
	
	cout << "Before Sorting Integer Array" <<"\n"<< endl;
	printarray(I, 10);
	cout << "After Sorting Integer Array" << "\n" << endl;
	sortarray(I, 10);
	printarray(I, 10);

	cout << "Before Sorting Double Array" << "\n" << endl;
	printarray(D, 10);
	cout << "After Sorting Double Array" << "\n" << endl;
	sortarray(D, 10);
	printarray(D, 10);

	cout << "Before Sorting Character array" << "\n" << endl;
	printarray(C, 10);
	cout << "After Sorting Character array" << "\n" << endl;
	sortarray(C, 10);
	printarray(C, 10);


}