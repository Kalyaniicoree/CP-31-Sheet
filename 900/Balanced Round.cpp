#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int maximumlength=1;
    int currentlength=1;
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1]<=k){
            currentlength++;
        }
        else{
            maximumlength=max(currentlength,maximumlength);
            currentlength=1;
        }
    }
    maximumlength=max(maximumlength,currentlength);
    cout<<n-maximumlength<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}