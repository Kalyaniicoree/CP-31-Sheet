#include<iostream>
#include<set>
using namespace std;
void solve(){
    long long a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<long long, long long>>king;
    set<pair<long long, long long>>queen;
    long long dx[]={a,a,b,b,-a,-a,-b,-b};
    long long dy[]={b,-b,a,-a,b,-b,a,-a};
    for(int i=0; i<8; i++){
        king.insert({xk+dx[i],yk+dy[i]});
        queen.insert({xq+dx[i],yq+dy[i]});
    }
    int count=0;
    for(auto pos: king){
        if(queen.count(pos)){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}