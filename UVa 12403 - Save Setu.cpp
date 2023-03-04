#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,sum=0;
    string a="donate",s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s[0]==a[0]){
            cin>>n;
            sum+=n;
        }
        else cout<<sum<<endl;
    }
}
