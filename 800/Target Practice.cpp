#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve(){
    int points=0;
    for(int i=0; i<10; i++){
        string row;
        cin>>row;
        for(int j=0; j<10; j++){
            if(row[j]=='X'){
                int d=min({i,9-i,j,9-j});
                points+=(d+1);
            }
        }
    }
    cout<<points<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}