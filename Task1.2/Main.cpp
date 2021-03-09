#include<iostream>
#include<string.h>
#include<stdlib.h >
#include<math.h>
using namespace std;
class Complex {

	float real = 0;
	float img = 0;
public:
	Complex() { setRealImg(0,0); }
	Complex(float real, float img) {
		setRealImg(real, img);
	}
	void setRealImg(float r, float i) {
		real = r;
		img = i;
	}
	float getReal() {
		return real;
	}
	float getImg() {
		return img;
	}
	float modulus()
	{
		return sqrt((real * real) + (img * img));
	}
	friend Complex add(Complex& X, Complex& Y);
};

Complex add(Complex& X, Complex& Y)
{
	float a, b;
	a = X.getReal() + Y.getReal();
	b = X.getImg() + Y.getImg();
	Complex send(a, b);
	return send;
}

int main()
{
	float a, b, c, d;
	cout << "Enter the Real and Imaginary Part of 1st Complex Number:" << endl;
	cin >> a;
	cin >> b;
	cout << "Enter the Real and Imaginary Part of 2nd Complex Number:" << endl;
	cin >> c;
	cin >> d;
	Complex complex;
	Complex complex1(a, b);
	Complex complex2(c, d);
	complex1.setRealImg(a, b);
	complex2.setRealImg(c, d);
	cout << "Modulus of a Default Complex Number from Default Constructor is :" << complex.modulus() << endl;
	cout << "Modulus of a Complex Number1:" << complex1.modulus() << endl;
	cout << "Modulus of a Complex Number2:" << complex2.modulus() << endl;
	Complex sum = add(complex1, complex2);
	cout << "Sum:" << sum.getReal() << "+" << sum.getImg() << "i" << endl;
}