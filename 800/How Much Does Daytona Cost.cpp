#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool found=false;
    for(int i=0; i<n; i++){
        if(k==a[i]){
            found=true;
            break;
        }
    }
    if(found){
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
        solve();
    }
    return 0;
}