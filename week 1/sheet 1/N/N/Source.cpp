#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= 64 && a <= 90)
	{
		cout <<char( a +32);
	}
	else
	{
		cout << char(a -32);
	}


	return 0;
}