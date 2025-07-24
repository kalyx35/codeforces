#include <iostream>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n,k;
		cin>>n>>k;
		char s[n];
		long freq[26]={0};
		for(int j=0;j<n;j++)
		{
			cin>>s[j];
			++freq[s[j]-97];
		}
		long f=0;
		for(int j=0;j<26;j++)
			f+=freq[j]%2;
		if(f>k+1)
			cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
