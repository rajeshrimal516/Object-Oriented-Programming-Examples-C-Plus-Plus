#include<iostream>
using namespace std;

class Point2D {
	float x;
	float y;
public:
	Point2D() {setXY_coordinate(0,0);}
	Point2D(float X, float Y)
	{
		setXY_coordinate(X, Y);
	}

	void setXY_coordinate(float X, float Y)
	{
		x = X;
		y = Y;
	}

	float getX_coordinate() {
		return x;
	}
	float getY_coordinate() {
		return y;
	}
};

class Line {
	
	Point2D Point1;
	Point2D Point2;


public:
	Line() {}
	Line(Point2D A,Point2D B) {
		setLine(A, B);
	}
	void setLine(Point2D X, Point2D Y) {
		Point1 = X;
		Point2 = Y;
	}

	Point2D getLinePoint1() {
		return Point1;
	}

	Point2D getLinePoint2() {
		return Point2;
	}

	void print()
	{
		Point2D First=getLinePoint1();
		Point2D Second=getLinePoint2();
		float m =((Second.getY_coordinate() - First.getY_coordinate()) / (Second.getX_coordinate() - First.getX_coordinate()));
		float intercept = (First.getY_coordinate() -( m * First.getX_coordinate()));
		cout << "Equation is" << endl;
		cout << "y=" << m << "x+" << intercept << endl;
		cout << "How many points do you want to determine??";
		int N;
		cin >> N;
		float step_size_X = (Second.getX_coordinate() - First.getX_coordinate()) / (N+1);
		float step_size_Y = (Second.getY_coordinate() - First.getY_coordinate()) / (N+1);

		cout << "Step size:  " << step_size_X << "  " << step_size_Y << endl;
		float x = First.getX_coordinate();
		float y = First.getY_coordinate();

		for (int i = 0; i <N; i++)
		{
			x = x + step_size_X;
			y = y + step_size_Y;
			cout << x << "  " << y << endl;
		}
		
		


	}



};

int main()
{
	float a, b, c, d;
	
	Point2D First(8,5);
	Point2D Second(6,2);
	Line line1(First, Second);
	cout << "Before Changing" << endl;
	line1.print();

	cout << "Enter the Coordinates of Point1 of 2nd line" << endl;
	cin >> a;
	cin >> b;
	cout << "Enter the Coordinates of Point2 of 2nd line" << endl;
	cin >> c;
	cin >> d;
	Point2D Third(a, b);
	Point2D Fourth(c, d);
	Line line2(Third, Fourth);
	cout << "After Changing" << endl;
	line2.print();

}