// Friend Operator Overloading

/*# include<iostream>

using namespace std;

class complex
{
private:
	int real;
	int img;
public:
	complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}

	void display()
	{
		cout << real << " + i" << img << endl;
	}

    friend complex operator+(complex x1, complex x2);
};

complex operator+(complex x1, complex x2)
{
	complex temp;

	temp.real = x1.real + x2.real;
	temp.img = x1.img + x2.img;

	return temp;
}

int main()
{
	complex C1(3, 5);
	complex C2(7, 4);
	complex C3;

	C3 = C1 + C2;

	C1.display();
	C2.display();
	C3.display();

	return 0;
}*/