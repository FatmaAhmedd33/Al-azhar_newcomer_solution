#include<iostream>
#include<iomanip>// to define setw( ), setfill( )
using namespace std;
int main()
{
	long long a, b, c, d, f = 1;

	cin >> a >> b >> c >> d;
	f = (a % 100) * (b % 100) * (c % 100) * (d % 100);

	//setw() is used to set the width of the field in which the output is printed.
	//setfill() is used to set the character used for filling the unused space within the field.
	cout << setw(2) << setfill('0') << f % 100;

	return 0;
}