#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,f;
	cin >> a;
	f = a;
	int b, c,x,z;
	z = a.length();


	if (a.find("+")<a.size())
	{
		x = a.find("+");
		b = stoi(f.erase(x, z));
		c= stoi(a.erase(0, x + 1));
		cout << b + c;


	}
	else if (a.find("/") < a.size())
	{
		x = a.find("/");
		b = stoi(f.erase(x, z));

		c = stoi(a.erase(0, x + 1));
		cout << b/c;


	}
	else  if (a.find("-") < a.size())
	{
		x = a.find("-");
		b = stoi(f.erase(x, z));
		c = stoi(a.erase(0, x + 1));
		cout << b - c;


	}
	else
	{
		x = a.find("*");
		b = stoi(f.erase(x, z));
		c = stoi(a.erase(0, x + 1));
		cout << b * c;


	}


	return 0;
}