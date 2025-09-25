#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long a[n];
        long nonZeros = 0, flag = 0;
        for(int i=0;i<n;i++) 
            cin>>a[i];
        for(int i=0;i<n;i++) {
            if(a[i]!=0)
                nonZeros++;
            if(a[i]==0&&nonZeros>0) {
                flag++;
                nonZeros=0;
            }
            if(flag==2) {
            	break;
            }
        }
        if (a[n-1]!=0)
		++flag;
	cout<< (flag>=2?2:flag) << "\n";
    }
    return 0;
}
