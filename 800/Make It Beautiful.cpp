#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(arr[0]==arr[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    reverse(arr.begin(),arr.end());
    if(arr[0]==arr[1]){
        swap(arr[1],arr[n-1]);
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<(i==n-1?"":" ");
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}