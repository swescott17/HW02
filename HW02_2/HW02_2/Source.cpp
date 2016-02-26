#include "fanclass.h"
#include "quadraticfunction.h"
#include "theEvenNumber.h"
#include <iostream>
using namespace std;

//for exercises, please check the .h files

int main()
{
	int l, p, r; //Integers for Exercise 9.6


				 //Test program for Exercise 9.2
	Fan k;
	k.F2(3, true, 10.0);
	cout << "Fan speed " << k.getspeed() << " Is it on? " << k.geton() << " Fan Radius " << k.getradius() << endl;

	Fan j;
	j.F2(2, false, 5.0);
	cout << "Fan speed " << j.getspeed() << " Is it on? " << j.geton() << " Fan Radius " << j.getradius() << endl;

	//Test program for Exercise 9.6
	cout << "Enter three integers. " << endl;
	cout << "a : ";
	cin >> r;
	cout << "b : ";
	cin >> l;
	cout << "c : ";
	cin >> p;
	cout << " ." << endl;
	quad h;
	h.set_all(r, l, p);
	cout << "The discriminant is " << h.getDiscriminant() << ". The root(s) are " << h.getRoot1() << ".\n";
	if (h.getDiscriminant() > 0) //if the discriminant is nonnegative then it will return the next root
	{
		cout << " " << h.getRoot2() << endl;
	}
	else //the discriminant was 0 or negative
	{
		cout << " There was only one root." << endl;
	}

	EvenNumber v;
	v.val(16);

	cout << "The previous even number is " << v.getPrevious() << ". The next even number is " << v.getNext() << "." << endl;

	return 0;
}