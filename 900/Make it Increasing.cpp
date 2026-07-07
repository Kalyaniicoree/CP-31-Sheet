#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int operations=0;
    for(int i=n-2; i>=0; i--){
        while(a[i]>=a[i+1] && a[i]>0){
            a[i]/=2;
            operations++;
        }
        if(a[i]>=a[i+1]){
        cout<<-1<<endl;
        return;
        }
    }
    cout<<operations<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}