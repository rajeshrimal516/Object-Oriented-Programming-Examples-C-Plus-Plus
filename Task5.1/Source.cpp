#include <iostream>
#include <math.h>
using namespace std;
class Exception
{
    float A, B, C;

public:  Exception() {}
      Exception(float x, float y, float z)
      {
          A = x;
          B = y;
          C = z;
      }

      float geta() { return A; }
      float getb() { return B; }
      float getc() { return C; }
};
class Triangle
{
    float a, b, c;
public:
    Triangle()
    {
        a = 5;
        b = 5;
        c = 10;
    }

    Triangle(float x, float y, float z)
    {
        try
        {
            if ((x + y <= z || x + z <= y || y + z <= x || x == 0 || y == 0 || z == 0))
            {
                Exception geoexception(x, y, z);
                throw(geoexception);
            }
            else
            {
                a = x;
                b = y;
                c = z;
            }
        }

        catch (Exception geoexcept)

        {
            cout << "Triangle with sides " << geoexcept.geta() << " ," << geoexcept.getb() << " ," << geoexcept.getc() << " is not possible. Please try again" << endl;
        }

    }
public:

    float circumferance()
    {
        return (a + b + c);
    }
    float area()
    {
        float semi = circumferance() / 2;
        return (sqrt(semi * (semi - a) * (semi - b) * (semi - c)));

    }

    bool checkrectangular(float a, float b, float c)
    {
        if ((a * a) == (b * b) + (c * c) || (b * b) == ((c * c) + (a * a)) || (c * c) == ((a * a) + (b * b)))
        {
            return true;
        }
        else
            return true;
    }

};

int main()
{
    float x, y, z;
    Triangle Triangle1(7, 3, 9);
    Triangle Triangle2(10, 10, 10);
    cout << "Enter the sides of the triangle 3:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    Triangle Triangle3(x, y, z);
    bool check1 = Triangle1.checkrectangular(x, y, z);
    if (check1 == true)
        cout << "The Triangle 1 (7,3,9) is rectangular" << endl;
    else
        cout << "The Triangle 1 (7,3,9) is not rectangular" << endl;

    bool check2 = Triangle2.checkrectangular(x, y, z);
    if (check2 == true)
        cout << "The Triangle 2 (10,10,10) is rectangular" << endl;
    else
        cout << "The Triangle 2 (10,10,10) is not rectangular" << endl;

    bool check3 = Triangle3.checkrectangular(x, y, z);
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
