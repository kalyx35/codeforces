#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long a,b,n;
		cin>>a>>b>>n;
		long long x[n];
		for(int j=0;j<n;j++)
			cin>>x[j];
		long long timer=b;
		for(int j=0;j<n;j++)
			timer+=min(x[j],a-1);
		cout<<timer<<"\n";
	}
	return 0;
}
