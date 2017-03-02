#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
 
int main() {  
    ll n,x,k,q;
    cin>>n>>k>>q;
    x=n-k%n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll v[n];
    for(ll i=x;i<n;i++) v[i-x]=a[i];
    for(ll i=0;i<x;i++) v[n-x+i]=a[i];
    while(q--){
        ll n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}