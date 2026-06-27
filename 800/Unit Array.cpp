#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int positive=0;
    int negative=0;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==-1){
            negative++;
        }
        else{
            positive++;
        }
    }
    int operations=0;
    while(negative>positive){
        positive++;
        negative--;
        operations++;
    }
    if(negative%2!=0){
        operations++;
    }
    cout << operations << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}