#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool found=false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(gcd(arr[i],arr[j])<=2){
                found=true;
                break;
            }
        }
        if(found){
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