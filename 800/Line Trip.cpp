#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x; 
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int maximum=a[0];
    for(int i=0; i<n-1; i++){
        maximum=max(maximum, a[i+1]-a[i]);
    }
    maximum=max(maximum, 2*(x-a[n-1]));
    cout<<maximum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}