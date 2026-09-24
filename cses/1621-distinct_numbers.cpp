#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(auto &x: a) cin>>x;
    vector<bool> seen(1e9+1);
    ll distinct = 0;
    for(int i=0; i<n; i++){
        if(!seen[a[i]]){
            distinct++;
            seen[a[i]] = true;
        }
    }
    cout<<distinct<<'\n';
}
