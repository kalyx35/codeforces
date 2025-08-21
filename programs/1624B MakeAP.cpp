#include <iostream>
using namespace std;
int main() {
	long long t;
	cin>>t;
	for (int i=0; i<t; i++) {
		long long a, b, c;
		cin>>a>>b>>c;
		bool flag = false;
		if ((2*b-c)/a>0 && (2*b-c)%a==0)
			flag = true;
		else if ((a+c)/2/b>0 && (a+c)/2%b==0 && (c-a)%2==0)
			flag = true;
		else if ((2*b-a)/c>0 && (2*b-a)%c==0)
			flag = true;
		if(flag)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0; 
}
