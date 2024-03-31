#include<iostream>
using namespace std;

class BasicShape
{
    double area;

public:

    void setarea(double a)
    {
        area=a;
    }

    int  getarea()
	{
        return area;
    }

    virtual void calcarea() = 0;

    void display()
    {
        cout << area;
    } 
};

class Circle  : public BasicShape
{
    long long int centrex;
    long long int centrey;
    double radius;

public :

    Circle(long long int x=0, long long int y=0, double r=0)
    { 
        centrex = x;
        centrey = y;
        radius = r;
    }

    ~Circle()
    {
    }

    int getx()
    {
        return centrex;
    }

    int gety()
    {
        return centrey;
    }

    void calcarea()
    {
        double a;
        a = 3.14159 * radius * radius;
        setarea(a);
    }
};

class Rectangle :public BasicShape
{
     long long int width;
     long long int length;

public :

    Rectangle(long long int w=0 ,long long int l=0)
    {
        width = w;
        length = l;
    }

    ~Rectangle()
	{
	}

    int getwidth()
	{
        return width;
    }

    int getlength()
	{
        return length;
    }

    void calcarea()
    {
         double a;
         a = length * width;
         setarea(a);
    }
};

int main()
{
    Circle c(20, 10, 12.5);
    Rectangle r(12, 12);
    c.calcarea();
    r.calcarea();

	cout << "The area of Circle is : ";
    c.display();
    cout << endl;

	cout << "The area of Rectangle is : ";
    r.display();
	cout << endl << endl;

	system("pause");
    return 0;
}