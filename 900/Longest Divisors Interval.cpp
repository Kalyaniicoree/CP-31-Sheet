#include<iostream>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long k=1;
    while(n%k==0){
        k++;
    }
    cout<<k-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}