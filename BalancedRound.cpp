#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

#define ll long long int
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) a.size()


void solve(int t){
    int n;
    int k;
    cin>>n>>k;
    vector <ll> v(n); 
    ll cnt = 1;
    for(int i = 0; i < n ; i++){
        cin>>v[i];
    }
    ll ans = 1;
    sort(all(v));
    for(int i = 1 ; i < n ; i++){
        if(v[i]-v[i-1]>k){
            cnt=1;
        }
        else cnt++;
        ans = max(ans,cnt);
    }
    cout<<n-ans<<endl;

}

int main(){

    int t;
    cin>>t;
    while(t--)
    // cout<<"calling for"<<t<<endl;
    solve(t);
}