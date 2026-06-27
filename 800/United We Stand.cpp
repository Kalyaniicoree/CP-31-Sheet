#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int maximum=a[n-1];
    if(a[0]==a[n-1]){
        cout<<-1<<"\n";
        return;
    }
    vector<int>b;
    vector<int>c;
    for(int i=0; i<n; i++){
        if(a[i]==maximum){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    cout<<c.size()<<" "<<b.size()<<"\n";
    for (int x : c) {
        cout << x << " ";
    }
    cout << "\n";
    
    for (int x : b) {
        cout << x << " ";
    }
    cout << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}