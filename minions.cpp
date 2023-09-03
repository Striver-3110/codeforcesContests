#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

#define ll long long int
#define ull unsigned long long int
#define sort(a)  sort(a.begin(),a.end())
#define pb push_back
#define el "\n"

void solve(){
    int n;
    std::cin>>n;
    std::vector<ll>v;
    ll a;
    for(int i = 0; i < n ; i++){
        cin>>a;
        v.pb(a);
    }
    ll cur = v[0];
    int part = 1;
    for(int i = 0 ; i < n ; i++){
        cur &= v[i];
        if(cur==0){
            if(i == n-1)break;
            part++;
            cur = v[i+1];
        }
    }
    if(cur != 0)part--;
    part = std::max(1,part);
    std::cout<<part<<el;
}

int32_t main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}