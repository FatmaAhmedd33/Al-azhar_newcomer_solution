#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	double c =  a / b;

	cout << "floor " << a << " / " << b << " = " << floor(c) <<"\n";
	cout << "ceil " << a << " / " << b << " = " << ceil( (double)c) << "\n";
	cout << "round " << a << " / " << b << " = " << round(c) << "\n";
	
	
	return 0;
}