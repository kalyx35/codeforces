#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long a,b,xk,yk,xq,yq;
		cin>>a>>b>>xk>>yk>>xq>>yq;
		long long x[4], y[4];
		x[0]=xk+a;	y[0]=yk+a;
		x[1]=xk-a;	y[1]=yk-a;
		x[2]=xk+b;	y[2]=yk+b;
		x[3]=xk-b;	y[3]=yk-b;
		int ans=0;
		for(int j=0;j<2;j++)
			for(int k=2;k<4;k++)
				if(((x[j]==xq+a||x[j]==xq-a)&&(y[k]==yq+b||y[k]==yq-b))||((x[j]==xq+b||x[j]==xq-b)&&(y[k]==yq+a||y[k]==yq-a)))
					++ans;
		for(int j=2;j<4;j++)
			for(int k=0;k<2;k++)
				if(((x[j]==xq+a||x[j]==xq-a)&&(y[k]==yq+b||y[k]==yq-b))||((x[j]==xq+b||x[j]==xq-b)&&(y[k]==yq+a||y[k]==yq-a)))
					++ans;
		if (a==b)
			cout<<ans/2<<"\n";
		else  cout<<ans<<"\n";
	}
	return 0;
}  
