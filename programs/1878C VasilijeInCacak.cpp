#include <iostream>
using namespace std;
int main()
{
	int t;
	long long int n, k, x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>k>>x;
		if (k*(k+1)/2 <= (long double)x && (n*(n+1)-(n-k)*(n-k+1))/2 >= (long double)x)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
