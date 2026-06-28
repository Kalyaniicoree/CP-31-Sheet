#include<iostream>
using namespace std;
void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long minimum=k*(k+1)/2;
    long long maximum=k*(2*n-k+1)/2;
    if(x>=minimum && x<=maximum){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}