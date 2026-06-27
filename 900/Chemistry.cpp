#include<iostream>
#include<string>
#include<map>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>freq;
    for(char ch: s){
        freq[ch]++;
    }
    int odd=0;
    for(auto const& pair: freq){
        if(pair.second % 2 !=0){
            odd++;
        }
    }
    if(odd-k<=1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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