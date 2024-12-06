#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed solve(){
 
    
    int a , b;
    vector<int> num1;
    map<int,int> vis;
    while(cin>>a>>b && (a and b)){
        num1.push_back(a);
        vis[b]++;
    } 
    int sum = 0;
    for(int i=0;i<num1.size();i++){
        sum += (num1[i]*vis[num1[i]]);
    }
 
    cout<<sum<<endl;
 
    return 0;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);int test = 1;
    // cin>>test;
    while (test--)solve();return 0;
}
