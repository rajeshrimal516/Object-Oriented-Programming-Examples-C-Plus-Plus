#include <iostream>
#include <math.h>
using namespace std;
class GeoException
{
	double A;
	double B;
	double C;

public:		GeoException() : A(0), B(0), C(0) { };
public:		GeoException(double a, double b, double c) : A(a), B(b), C(c)
			{
				A = a;
				B = b;
				C = c;
			}
public:		double getA() { return A; }
public:		double getB() { return B; }
public:		double getC() { return C; }
};
class Triangle
{
    float a, b, c;
public:
    Triangle()
    {
        a = 0;
        b = 0;
        c = 0;
    }

    Triangle(float x, float y, float z)
    {
        try
        {
            if ((x + y <= z || x + z <= y || y + z <= x || x == 0 || y == 0 || z == 0))
            {
                GeoException geoexception(x, y, z);
                throw geoexception;
            }
            else
            {
                a = x;
                b = y;
                c = z;
            }
        }

        catch (GeoException exp)

        {
            cout << "Triangle with sides " << exp.getA() << " ," << exp.getB() << " ," << exp.getC() << " is not possible. Please try again" << endl;
        }

    }
public:
	double geta() { return a; }
	double getb() { return b; }
	double getc() { return c; }

    float circumferance()
    {
        return (a + b + c);
    }
    float area()
    {
        float semi = circumferance() / 2;
        return (sqrt(semi * (semi - a) * (semi - b) * (semi - c)));

    }

    bool checkrectangular()
    {
        double a = geta();
        double b = getb();
        double c = getc();
           
        if ( (a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b) )
        {
            return true;
        }
        else
            return false;
    }

};

int main()
{
    float x, y, z;
    Triangle Triangle1(7, 3, 9);
    Triangle Triangle2(10, 10, 10);

    bool check1 = Triangle1.checkrectangular();
    if (check1 == true)
        cout << "The Triangle 1 (7,3,9) is rectangular" << endl;
    else
        cout << "The Triangle 1 (7,3,9) is not rectangular" << endl;

    bool check2 = Triangle2.checkrectangular();
    if (check2 == true)
        cout << "The Triangle 2 (10,10,10) is rectangular" << endl;
    else
        cout << "The Triangle 2 (10,10,10) is not rectangular" << endl;

    cout << "Enter the sides of the triangle 3:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    Triangle Triangle3(x, y, z);

    bool check3 = Triangle3.checkrectangular();
    if (check3 == true)
        cout << "The Triangle 3(" << x << "," << y << "," << z << ") is rectangular" << endl;
    else
        cout << "The Triangle 3 is not rectangular" << endl;

    cout << "Circumferance of 1st triangle is: " << Triangle1.circumferance() << endl;
    cout << "Circumferance of 2nd triangle is: " << Triangle2.circumferance() << endl;
    if (Triangle1.area() > Triangle2.area())
        cout << "Triangle 1 has Largest Area of:" << Triangle1.area() << endl;
    else cout << "Triangle 2 has Largest Area of:" << Triangle2.area();

    return 0;
}
