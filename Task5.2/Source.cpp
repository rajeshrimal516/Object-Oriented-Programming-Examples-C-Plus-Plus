#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
namespace Rajesh
{
	class Complex {
		float real;
		float img;
	public: Complex() {}
		  Complex(float x, float y)
		  {
			  setImgReal(x, y);
		  }

		  void setImgReal(float x, float y)
		  {
			  real = x;
			  img = y;
		  }
		  float getreal() { return real; }
		  float getimg() { return img; }
		  friend bool  operator==(Complex& c1, Complex& c2);
		  friend bool operator!=(Complex& c1, Complex& c2);
		  friend bool operator<=(Complex& c1, Complex& c2);
		  friend bool operator>=(Complex& c1, Complex& c2);
		  friend bool operator>(Complex& c1, Complex& c2);
		  friend bool operator<(Complex& c1, Complex& c2);
		  float modulus()
		  {
			  float r = getreal();
			  float i = getimg();
			  return (sqrt((r * r) + (i * i)));
		  }
	};

	bool operator == (Complex& c1, Complex& c2)
	{
		return (c1.modulus() == c2.modulus() && c1.modulus() == c2.modulus());
	}
	bool operator!=(Complex& c1, Complex& c2)
	{
		return(c1.modulus() != c2.modulus() && c1.modulus() != c2.modulus());
	}
	bool operator<=(Complex& c1, Complex& c2)
	{
		return(c1.modulus() == c2.modulus() || c1.modulus() < c2.modulus());
	}
	bool operator>=(Complex& c1, Complex& c2)
	{
		return(c1.modulus() == c2.modulus() || c1.modulus() > c2.modulus());
	}
	bool operator>(Complex& c1, Complex& c2)
	{
		return(c1.modulus() > c2.modulus());
	}
	bool operator<(Complex& c1, Complex& c2)
	{
		return(c1.modulus() < c2.modulus());
	}
}
namespace Rimal
{
	class Complex {
		float real;
		float img;
	public: Complex() {}
		  Complex(float x, float y)
		  {
			  setImgReal(x, y);
		  }

		  void setImgReal(float x, float y)
		  {
			  real = x;
			  img = y;
		  }
		  float getreal() { return real; }
		  float getimg() { return img; }
		  friend bool  operator==(const Complex& c1, const Complex& c2);
		  friend bool operator!=(const Complex& c1, const Complex& c2);
		  friend bool operator<=(const Complex& c1, const Complex& c2);
		  friend bool operator>=(const Complex& c1, const Complex& c2);
		  friend bool operator>(const Complex& c1, const Complex& c2);
		  friend bool operator<(const Complex& c1, const Complex& c2);

	};

	bool operator == (const Complex& c1, const Complex& c2)
	{
		if (c1.real != c2.real)
		{
			if (c1.img != c2.img)
				return false;
			else
				return true;
		}
		else
		{
			if (c1.img != c2.img)
				return false;
			else
				return true;
		}

	}
	bool operator!=(const Complex& c1, const Complex& c2)
	{
		if (c1.real == c2.real)
		{
			return true;
		}
		else
		{
			if (c1.img == c2.img)
				return false;
			else
				return true;
		}
	}
	bool operator<=(const Complex& c1, const Complex& c2)
	{
		if (c1.real > c2.real)
		{
			return false;
		}
		else if (c1.real == c2.real)
		{
			if (c1.img > c2.img)
				return false;
			else if (c2.img == 0)
				return true;
			else
				return true;
		}
		else
		{
			return true;
		}
	}
	bool operator>=(const Complex& c1, const Complex& c2)
	{
		if (c1.real < c2.real)
		{
			return false;
		}
		else if (c1.real == c2.real)
		{
			if (c1.img < c2.img)
				return false;
			else if (c2.img == 0)
				return true;
			else
				return true;
		}
		else
		{
			return true;
		}

	}
	bool operator>(const Complex& c1, const Complex& c2)
	{

		if (c1.real < c2.real)
		{
			return false;
		}
		else if (c1.real == c2.real)
		{
			if (c1.img < c2.img)
				return false;
			else if (c2.img == 0)
				return false;
			else
				return true;
		}
		else
		{
			return true;
		}
	}
	bool operator<(const Complex& c1, const Complex& c2)
	{
		if (c1.real > c2.real)
		{
			return false;
		}
		else if (c1.real == c2.real)
		{
			if (c1.img > c2.img)
				return false;
			else if (c2.img == 0)
				return false;
			else
				return true;
		}
		else
		{
			return true;
		}

	}
}

template <typename U, size_t N>
void sortarray(U(&data)[N])
{
	sort(data, data + N);
}


template <typename V, typename A, typename B, typename C, typename D, typename E, typename F, size_t N >
void print(V(&arr), A(&a), B(&b), C(&c), D(&d), E(&e), F(&f)[N])
{
	for (int i = 0; i < N; i=i+2)
	{
		cout << arr[i].getreal() << " + " << arr[i].getimg() << "i" << "\t" <<arr[i+1].getreal() << " + " << arr[i+1].getimg() << "i"<<"\t" << a[i] << "  " << b[i] << "  " << c[i] << "  " << d[i] << "  " << e[i] << "  " << f[i] << "  " << endl;
		cout << endl;
	}
}

int main()
{
	using namespace std;
	float x, y;
	Rajesh::Complex Rajesh_array[8];
	Rimal::Complex Rimal_array[8];
	bool a[8], b[8], c[8], d[8], e[8], f[8];
	
		Rajesh_array[0].setImgReal(2, 5);
		Rajesh_array[1].setImgReal(5, 2);
		Rajesh_array[2].setImgReal(7, 0);
		Rajesh_array[3].setImgReal(7, 0);
		Rajesh_array[4].setImgReal(6, 7);
		Rajesh_array[5].setImgReal(1, 1);
		Rajesh_array[6].setImgReal(1, 0);
		Rajesh_array[7].setImgReal(1, 4);
		sortarray(Rajesh_array);

	for (int j = 0; j < 8; j=j+2)
	{
		a[j] = (Rajesh_array[j] == Rajesh_array[j+1]);
		b[j] = (Rajesh_array[j] != Rajesh_array[j+1]);
		c[j] = (Rajesh_array[j] < Rajesh_array[j+1]);
		d[j] = (Rajesh_array[j] > Rajesh_array[j+1]);
		e[j] = (Rajesh_array[j] <= Rajesh_array[j+1]);
		f[j] = (Rajesh_array[j] >= Rajesh_array[j+1]);
	}
	print(Rajesh_array, a, b, c, d, e, f);
	cout << "--------------------------------" << endl;
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		Rimal_array[i].setImgReal(Rajesh_array[i].getreal(), Rajesh_array[i].getimg());
	}
	sortarray(Rimal_array);
		for (int j = 0; j < 8; j=j + 2)
		{
			a[j] = (Rimal_array[j] == Rimal_array[j + 1]);
			b[j] = (Rimal_array[j] != Rimal_array[j + 1]);
			c[j] = (Rimal_array[j] < Rimal_array[j + 1]);
			d[j] = (Rimal_array[j] > Rimal_array[j + 1]);
			e[j] = (Rimal_array[j] <= Rimal_array[j + 1]);
			f[j] = (Rimal_array[j] >= Rimal_array[j + 1]);
	}
	print(Rimal_array, a, b, c, d, e, f);
	return 0;
}
