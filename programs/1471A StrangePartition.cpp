#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long n, x;
		cin>>n>>x;
		long a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		long long sum=0;
		for(int j=0;j<n;j++)
			sum+=a[j];
		long long min = ceil((double)sum/x);
		long long max=0;
		for(int j=0;j<n;j++)
			max+=ceil((double)a[j]/x);
		cout<<min<<" "<<max<<"\n";
	}
	return 0;
}
