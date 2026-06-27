#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    for(int power=1; power<=100000; power*=10){
        for(int digit=1; digit<=9; digit++){
            if(digit*power<=n){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}