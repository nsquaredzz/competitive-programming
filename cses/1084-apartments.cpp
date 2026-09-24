#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(int i=0;i<n; i++) cin >>a[i];
    for(int i=0;i<m; i++) cin >>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll l= 0,r= 0,ans= 0;
    while(l<n && r<m){
        if(b[r]+k<a[l]){
            r++;
        }else if(b[r]-k>a[l]){
            l++;
        }else{
            ans++;
            l++;
            r++;
        }
    }
    cout<<ans<<'\n';
}
