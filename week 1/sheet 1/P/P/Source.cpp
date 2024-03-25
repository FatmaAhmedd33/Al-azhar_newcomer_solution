#include<iostream>
using  namespace std;
int main()
{
	char a;//depend on the frist digit only
	cin >> a;
	int b = a - 48;
	if (b % 2 == 0)
		cout << "EVEN";
	else
	{
		cout << "ODD";
	}

	return 0;
}