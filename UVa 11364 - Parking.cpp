#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        int mino=99,maxo=0;
        cin>>n;
        int arr[n],i=0;
        while(i<n){
            cin>>arr[i];
            mino=min(mino,arr[i]);
            maxo=max(maxo,arr[i]);
            i++;
        }
        cout<<(maxo-mino)*2<<endl;
    }
}
