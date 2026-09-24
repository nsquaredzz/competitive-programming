#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll l = 0,r = n-1,ans = 0;
    while(l<r){
        if(a[l]+a[r]>x){
            ans++;
            r--;
        }else{
            l++;
            r--;
            ans++;
        }
    }
    ans+=(r-l+1);
    cout<<ans<<'\n';
}
