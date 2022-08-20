// Operator Overloading

/*# include<iostream>

using namespace std;

class complex
{
public:
	int real;
	int img;

	complex(int r=0, int i=0)
	{
		real = r;
		img = i;
	}
	complex operator+(complex c)
	{
		complex temp;

		temp.real = real + c.real;
		temp.img = img + c.img;

		return temp;
	}
};

int main()
{
	complex C1(3, 5);
	complex C2(4, 7);
	complex C3;

	C3 = C1 + C2;

	cout << C3.real << " + i" << C3.img << endl;


	return 0;
}*/