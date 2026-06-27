#include<iostream>
using namespace std;
void solve(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
    }
    else{
        if(a+(d-b)<c){
            cout<<-1<<endl;
        }
        else{
            cout<<a+(d-b)-c+(d-b)<<endl;
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