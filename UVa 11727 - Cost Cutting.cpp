#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        int a,b,c;
        cin>>a>>b>>c;
        int maxo=a,mini=a;
        maxo=max(maxo,max(b,c));
        mini=min(mini,min(b,c));
        if(a!=maxo&&a!=mini) cout<<"Case "<<i<<": "<<a<<endl;
        if(b!=maxo&&b!=mini) cout<<"Case "<<i<<": "<<b<<endl;
        if(c!=maxo&&c!=mini) cout<<"Case "<<i<<": "<<c<<endl;
        i++;
    }
}
