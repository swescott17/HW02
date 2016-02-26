#include <iostream>
//HW 2 Exercise 9.6

class quad
{
private: //Variables for the quadratic equation
	int a;
	int b;
	int c;
public:
	quad all() //Constructor with original values for a, b, and c
	{
		a = 1;
		b = 4;
		c = 2;
	}
	void set_all(int, int, int);
	int geta() //returns a
	{
		return a;
	}
	int getb() //returns b
	{
		return b;
	}
	int getc() //returns c
	{
		return c;
	}
	int getDiscriminant() //displays discriminant
	{
		return ((pow(b, 2)) - (4 * a * c));
	}
	int getRoot1() 
	{
		
			return ((-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a)); //root equation
		
	}
	int getRoot2() 
	{
		
			return ((-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a)); //root equation
	
	}
};
void quad::set_all(int d, int e, int f)
{
	a = d;
	b = e;
	c = f;
}
