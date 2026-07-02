#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int currlength=1;
    int maxlength=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            currlength++;
        }
        else{
            maxlength=max(currlength,maxlength);
            currlength=1;
        }
    }
    maxlength=max(currlength,maxlength);
    cout<<maxlength+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}