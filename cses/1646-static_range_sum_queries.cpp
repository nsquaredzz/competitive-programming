#include<bits/stdc++.h>
using namespace std;


#define ll long long
int main(){
    ll n,q;cin>>n>>q;
    vector<ll> a(n);
    for(auto &x: a) cin>>x;
    vector<ll> prefix(n);
    prefix[0]=a[0];
    for(ll i=1; i<n; i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    while(q--){
        ll l,r;cin>>l>>r;
        l--;
        r--;
        cout<<(l==0? prefix[r] : prefix[r]-prefix[l-1])<<'\n';
    }
}
