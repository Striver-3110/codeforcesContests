#include<iostream>
using namespace std;
#define ll long long
#define nl "\n"
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i = 1 ; ; i++){
            if(n % i != 0){
                cout<<i - 1 << nl;break;
            }
        }
    }
}