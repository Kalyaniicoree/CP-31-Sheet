#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st=0;
    int end=n-1;
    while(st<end && s[st]!=s[end]){
        st++;
        end--;
    }
    int length=(end-st+1);
    cout<<length<<endl;;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}