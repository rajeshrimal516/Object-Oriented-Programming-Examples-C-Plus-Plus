#include <iostream>
#include<cstring>
using namespace std;
template <typename T, size_t N>
int index( T(&a)[N])

{
	int small_index = 0;
	for (int j = 0; j < N; j++)
	{
		if (a[j] < a[small_index])
		{
			small_index = j;
		}
		
	}
	return small_index;
}

int main()
{
	int a[] = {1,43,45,33,23,0,34,23,12,13};
	double b[] = { 1.2,3.4,4,4.5,0.3,4.3 };
	string c[] = {"Rajesh","Rimal","Faculty","Electrical","Engineering","Osijek"};
		int x = index(a);
		int y = index(b);
		int z = index(c);

	/*	for (int i = 0; i < 6; i++)
		
		{
			cout <<"c["<<i<<"]=" <<(c[i])<<endl;
			cout << "c[" << i << "]=" << sizeof("Rimal") << endl;
		}*/

		cout << "Integer array a[] smallest Index=" << x << endl;
		cout << "Double array b[] smallest Index=" << y << endl;
		cout << "String array c[] smallest Index=" << z << endl;
		return 0;
}
