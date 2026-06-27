#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            cout<<0<<"\n";
            return;
        }
    }
    int minimum=INT_MAX;
    for(int i=0; i<n-1; i++){
        int gap=arr[i+1]-arr[i];
        int operations=(gap/2)+1;
        minimum=min(operations, minimum);
    }
    cout<<minimum<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}