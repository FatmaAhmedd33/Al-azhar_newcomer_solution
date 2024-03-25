#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r;
	double b = 3.141592653;
	cin >> r;
	
	cout << fixed << setprecision(9) << b * (r * r);

	return 0;
}