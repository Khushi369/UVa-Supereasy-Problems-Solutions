#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(p>q) cout<<">"<<endl;
        else if(p<q) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }
}
