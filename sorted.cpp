#include<iostream>
#include<vector>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

#define pb(a) push_back(a)
#define maxLen (int)50
#define vl vector<ll>

#define ll long long
#define nl "\n"
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        std::vl v;
        ll arr[n];
        for(int i = 0 ; i < n ; i++){
            ll a;
            std::cin>>a;
            v.pb(a);
            
        }
        std::copy(v.begin(), v.end(), arr);
        std::sort(arr,arr+n);

        bool flg = false;
        for(int j = n - 1; j >= 0 ; j--){
            if(arr[j] != v[j]){
                std::cout<<arr[j]<<nl;flg = true; break;
            }
        }
        if(!flg){
            std::cout<<0<<nl;
        }
    }
}

