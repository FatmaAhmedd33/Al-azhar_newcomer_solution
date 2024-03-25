#include<iostream>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	int y = a / 365;
	int m= (a % 365)/30;
	int d = (a % 365) % 30;
	cout << y << " years" << "\n" << m << " months" << "\n" << d << " days" << "\n";
	

	return 0;
}