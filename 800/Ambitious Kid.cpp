#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minimum=abs(arr[0]);
    for(int i=0; i<n; i++){
            minimum=min(abs(arr[i]),minimum);
    }
    cout<<minimum<<endl;
    return 0;
}