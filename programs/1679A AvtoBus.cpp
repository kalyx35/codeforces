#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for (int i=0;i<t;i++) {
		long long n;
		cin>>n;
		if (n%2==1 || n==0 || n==2)
			cout<<-1<<"\n";
		else {
			if (n%6==2 || n%6==4)
				cout<<n/6+1<<" ";
			else 
				cout<<n/6<<" ";
			cout<<n/4<<"\n";
		}
	}
    return 0;
}
