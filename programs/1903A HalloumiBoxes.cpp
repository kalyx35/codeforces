#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
            cout<<"YES"<<"\n";
        else if(k>=2)
            cout<<"YES"<<"\n";
        else if(k==1) {
            int flag=0;
            for(int i=1;i<n;i++) {
                if(a[i-1]>a[i]) {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<< "NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
    }
    return 0;
}
