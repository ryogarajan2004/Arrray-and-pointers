#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	int* p;
	int** q;
	p = &x;
	q = &p;
	x = 5;
	cout << "Value of x"<<setw(5) << x << endl;
	cout << "Value of &x" <<setw(5)<< & x << endl;
	cout << "Value of p" << setw(5)<<p << endl;
	cout << "Value of *p" <<setw(5)<< * p << endl;
	cout << "Value of &p" <<setw(5)<< & p << endl;
	cout << "Value of q" <<setw(5)<< q << endl;
	cout << "Value of &q" <<setw(5)<< & q << endl;
	cout << "Value of *q" <<setw(5)<< * q << endl;
	cout << "Value of **q" <<setw(5)<< * *q << endl;
	
	
}