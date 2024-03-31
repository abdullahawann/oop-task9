#include <iostream>
#include <string>
using namespace std;

class Ship
{
    string Name;
    string Year;

public :

    Ship()
	{
	}

    ~Ship()
	{
	}

    void setname(string n)
    {
        Name = n;
    }

    void setyear(string y)
    {
        Year = y;
    }

    string getname()
    { 
        return Name;
    }

	string getyear()
	{
		return Year;
	}

    virtual void display()
    {
        cout << "The ship name is : " << Name << endl;
        cout << "The year it was built in is : " << Year << endl << endl;
    }
};

class CruiseShip : public Ship
{
    int max_passengers;

public:

    CruiseShip(int max)
	{
		max_passengers = max;
	}

    ~CruiseShip()
	{
	}

    void setmaxpass(int m)
    {
        max_passengers = m;
    }

    void display() override
    {
        cout << "The ship name is : "<< getname() << endl;
        cout << "The maximum number of passengers are : " << max_passengers << endl << endl;
    }
};

class CargoShip : public Ship
{
    int capacity;

public:

    CargoShip(int c)
	{
		capacity = c;
	}

    ~CargoShip()
	{
	}

    void setcapacity(int c)
    {
        capacity = c;
    }

    void display()override
    {
        cout << "The ship name is : " << getname() << endl;
        cout << "The ship cargo capacity is : " << capacity << endl << endl;
    }
};

int main()
{
    string name;
    string year;
    int maxpass, capacity;

    cout << "Enter the ship name : ";
    cin >> name;
    cout << "Enter the built year : ";
    cin >> year;
    cout << "Enter maximum passengers capacity : ";
    cin >> maxpass;
    cout << "Enter cargo capacity : ";
    cin >> capacity;

	CruiseShip obj1(maxpass);
	CargoShip obj2(capacity);

    Ship* obj3[3];

    obj3[0] = new Ship; 
	obj3[1] = new CruiseShip(maxpass);
	obj3[2] = new CargoShip(capacity);
    obj3[0] -> setname(name);
    obj3[0] -> setyear(year);
	obj3[1] -> setname(name);
    obj3[2] -> setname(name);
	cout << endl;

    for(int i=0;i<3;i++)
    {
        obj3[i] -> display();
    }

	for(int i=0;i<3;i++)
    {
		delete obj3[i];
    }

	system("pause");
    return 0;
}