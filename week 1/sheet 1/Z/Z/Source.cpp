#include<iostream>
#include<cmath>
using namespace std;
int main()
{// handel 1 case
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a ==  1 && b == 1 || a==1)
	{
		cout << "NO";

		return 0;

	}
	if (b*log(a) > d*log(c))
	{
			cout << "YES";
			return 0;
	
	}
	if (a == c)
	{
		if (b > d)
		{
			cout << "YES";
			return 0;
		}
	
	}
	cout << "NO";

	return 0;
}