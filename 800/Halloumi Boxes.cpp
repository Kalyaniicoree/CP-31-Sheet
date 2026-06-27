#include<iostream>
#include<vector>
using namespace std;
bool sortingpossible(vector<int>&a, int n){
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(k>1 || sortingpossible(arr,n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve():
    }
    return 0;

}