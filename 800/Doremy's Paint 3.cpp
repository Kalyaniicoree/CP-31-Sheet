#include<iostream>
#include<map>
#include<cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,int>freq;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    if(freq.size()==1){
        cout<<"YES"<<endl;
    }
    else if(freq.size()==2){
        int f1=freq.begin()->second;
        int f2=freq.rbegin()->second;
        if(abs(f1-f2)<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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