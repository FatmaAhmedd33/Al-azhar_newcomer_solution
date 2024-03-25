#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a); getline(cin, b);
	int c = a.find(' ');
	int d = b.find(' ');
	a.erase(0, c);
	b.erase(0, d);
	if (a == b)

	{
		cout << "ARE Brothers";
	}
	else
	{
		cout << "NOT";
	}
	return 0;

}