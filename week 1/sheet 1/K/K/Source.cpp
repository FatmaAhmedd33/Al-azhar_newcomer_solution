#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int v = max({ a,b,c });
	int m = min({ a,b,c });
	cout << m << " " << v;

	return 0;

}