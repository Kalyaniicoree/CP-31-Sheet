#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count2=0;
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            count2++;
        }
    }
    if(count2==0){
        cout<<1<<" ";
        return;
    }
    if(count2%2 != 0){
        cout<<-1<<" ";
    }
    else{
        int count=0;
        for(int i=0; i<n-1; i++){
            if(arr[i]==2){
                count++;
            }
        if(count==count2/2){
            cout<<i+1<<" ";
            return;
        }
    }
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