#include <iostream>
#include <string>
#include<fstream>
using namespace std;
class Three_Dimensional_vector {
	int i;
	int j;
	int k;
public:
	Three_Dimensional_vector() {
		i = 0;
		j = 0;
		k = 0;
	}
	Three_Dimensional_vector(int x, int y, int z)
	{
		i = x; j = y; k = z;
	}
	Three_Dimensional_vector(const Three_Dimensional_vector& Vec3D);
	Three_Dimensional_vector operator+(const Three_Dimensional_vector &Vec3D);
	Three_Dimensional_vector operator=(const Three_Dimensional_vector& Vec3D);
	friend Three_Dimensional_vector operator<(const Three_Dimensional_vector Vec3D, const Three_Dimensional_vector Vec1_3D);
	friend ostream& operator<< (ostream& out, const Three_Dimensional_vector& Vec3D);
	void disp();
};
Three_Dimensional_vector::Three_Dimensional_vector(const Three_Dimensional_vector &Vec3D)
{
	i = Vec3D.i; j = Vec3D.j; k = Vec3D.k;
}

Three_Dimensional_vector Three_Dimensional_vector:: operator+(const Three_Dimensional_vector& Vec3D)
{
	return Three_Dimensional_vector(i + Vec3D.i, j + Vec3D.j, k + Vec3D.k);
}
Three_Dimensional_vector operator<(const Three_Dimensional_vector Vec3D, const Three_Dimensional_vector Vec1_3D)
{
int	A = Vec3D.i +Vec3D.j + Vec3D.k;
int	B = Vec1_3D.i + Vec1_3D.j + Vec1_3D.k;
if (A < B)
return Vec3D;
else
return Vec1_3D;
}
ostream& operator<<(ostream& out, const Three_Dimensional_vector& Vec3D)
{
	out << Vec3D.i<<" " << Vec3D.j<<" " << Vec3D.k << endl;
	return out;
}

Three_Dimensional_vector Three_Dimensional_vector::operator=(const Three_Dimensional_vector& Vec3D)
{
	return Vec3D;
}
void Three_Dimensional_vector ::disp()
{
	cout << i << " " << j << " " << k << endl;
}
int main()
{
	Three_Dimensional_vector a(1, 2, 3);
	Three_Dimensional_vector b(2, 3, 4);
	Three_Dimensional_vector c = a + b;
	Three_Dimensional_vector d = a;
	Three_Dimensional_vector e = a < b;
	cout << "+ Operator" << endl;
	c.disp();
	cout << "= Operator" << endl;
	d.disp();
	cout << "< Operator" << endl;
	e.disp();
	cout << "<< Operator" << endl;
	cout << a;
}