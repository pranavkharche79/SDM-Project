#include<iostream>
using namespace std;
int main()
{
	int r, c;	int n=1;
	cout << "Enter number of rows : \n";
	cin>> r;
	cout << "Enter number of columns : \n";
	cin>> c;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<n++;
		}
		cout<<"\n";
	}
	return 0;
}
