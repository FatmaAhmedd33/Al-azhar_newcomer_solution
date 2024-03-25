#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[3],b[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+3);
	for (int i = 0; i < 3; i++)
	{
		cout<< a[i]<<"\n";
		
	}
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << b[i]<<"\n";
	}
	

	
	//cout << d << "\n" << e << "\n" << f << "\n"<<"\n";
	//cout << a << "\n" << b << "\n" << c << "\n";
	

	return 0;
}