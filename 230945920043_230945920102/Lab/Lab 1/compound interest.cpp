#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p;
	float r;
	int t;
	int n;
	double ci;
	
	cout<<"enter princple amount"<<p<<endl;
	cin>>p>>endl;
	cout<<"enter rate of intrest"<<r<<endl;
	cin>>r>>endl;
	cout<<"enter time period"<<t<<endl;
	cin>>t>>endl;
	cout<<"enter no of years"<<n<<endl;
	cin>>n>>endl;
	cout<<"compound interest= "<<ci;
	cin>>ci>>endl;
	ci=p*(pow(1+(r/100*n)),n*t);
	
}
