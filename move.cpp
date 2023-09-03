#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb(a) push_back(a)
#define maxLen (ll)50
#define vl vector<ll>
#define vi vector<ll>

#define ll long long
#define nl "\n"

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,c;
        cin >> n>>k>>c;
        if(c%2 == 0){
            if(n == k)cout<<"Second"<<endl;
            else if(n>k)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(n == k)cout<<"First"<<endl;
            else if(n > k)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}