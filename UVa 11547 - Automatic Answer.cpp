#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,e,f,h=2,num;
        cin>>n;
        d=(n*567)/9;
        e=(d+7492)*235;
        f=(e/47)-498;
        while(h--){
            num=f%10;
            f=f/10;
        }
        cout<<abs(num-0)<<endl;
    }
}
