#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int totaldots=0;
    bool threedots=false;
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            totaldots++;
            if(i+2<n && s[i+1]=='.' && s[i+2]=='.'){
                threedots=true;
            }
        }
    }
    if(threedots){
        cout<<2<<endl;
    }
    else{
        cout<<totaldots<<endl;
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