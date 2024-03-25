#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= 48 && a<=57 )
	{
		cout << "IS DIGIT";
	}
	else if (a >= 64 && a <= 90)
	{
		cout << "ALPHA" << "\n" << "IS CAPITAL";
	}
	else
	{
		cout << "ALPHA" << "\n" << "IS SMALL";

	}

	return 0;
}