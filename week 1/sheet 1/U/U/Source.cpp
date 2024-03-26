#include<iostream>
using namespace std;
int main()
{
	double a;
	cin >> a;
	int b = a;
	if (b == a)
	{
		cout << "int " << b;

	}
	else
	{
		cout << "float " << b << " " << a - b;
	}

	return 0;
}