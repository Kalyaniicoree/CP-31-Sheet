#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    long long time=b;
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        time+=min(a-1, x);
    }
    cout<<time<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}