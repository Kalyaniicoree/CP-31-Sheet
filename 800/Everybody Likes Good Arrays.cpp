#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i>0 && (arr[i]%2==arr[i-1]%2)){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
