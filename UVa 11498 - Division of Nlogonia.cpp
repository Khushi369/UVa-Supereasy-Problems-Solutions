#include <iostream>
using namespace std;
int main(){
    int t,x,y,n,m;
    while(true){
        cin>>t;
        if(t<0) break;
        cin>>n>>m;
        while(t--){
            cin>>x>>y;
            if(x>n&&y>m) cout<<"NE"<<endl;
            if(x<n&&y>m) cout<<"NO"<<endl;
            if(x<n&&y<m) cout<<"SO"<<endl;
            if(x>n&&y<m) cout<<"SE"<<endl;
            if(x==n||y==m) cout<<"divisa"<<endl;
        }
    }
    return 0;
}
