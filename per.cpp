// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<long long> dp(n+1,-1);
    if(n%2 == 1){
    ll f = n/2;
    for(ll i = 1 ; i <= n ;i++){
        if(i <= f){
            if(i == f){
                cout<<i<<" "<<i*2<<" ";
                dp[i] = 1;
                dp[i*2] = 1;
            }
            else{
                cout<<i<<" ";
                dp[i] = 1;
            }
        }
        else if(i*2 <= n){
            cout<<i<<" "<<i*2<<" ";
            dp[i] = 1;
            dp[i*2] = 1;
        }
        if(dp[i] == -1){
            cout<<i<<" ";
        }
    }
    }
    else{
        ll f = (n/2) - 1;
    for(ll i = 1 ; i <= n ;i++){
        if(i <= f){
            if(i == f){
                cout<<i<<" "<<i*2<<" ";
                dp[i] = 1;
                dp[i*2] = 1;
            }
            else{
            cout<<i<<" ";
            dp[i] = 1;
            }
        }
        else if(i*2 <= n){
            cout<<i<<" "<<i*2<<" ";
            dp[i] = 1;
            dp[i*2] = 1;
        }
        if(dp[i] == -1){
            cout<<i<<" ";
        }
    }
}
}

int main(){
    freopen("out.txt","w",stdout);
    freopen("in.txt","r",stdin);
    ll n;
    cin>>n;
    while (n--){
        solve();
        cout<<endl;
    }
}