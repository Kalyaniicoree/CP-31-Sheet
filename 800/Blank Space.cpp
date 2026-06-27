#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maximum=0;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
            maximum=max(maximum, count);
        }
        else{
            count=0;
        }
    }
    return maximum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;;
    }
    return 0;
}