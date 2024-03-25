#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int f = a[a.length() - 1] - 48;
	int v = b[b.length() - 1] - 48;
	cout <<f+ v;
	return 0;
}