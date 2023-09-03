#include<iostream>
#include<vector>
#define IOS ios_base::sync_with_stdio(NULL)


#define ll long long int
#define vl vector<ll>

using namespace std;

ll mex(vl a, ll n) {
    vector<bool> used(n + 1, false);
    for (ll i = 0; i < n; i++) {
        used[a[i]] = true;
    }
    for (ll i = 0; i <= n; i++) {
        if (!used[i]) {
            return i;
        }
    }
    return n + 1;
}

int main() {
    IOS;cin.tie(NULL);cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vl a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (k <= n || n == 1) {
            for (ll i = 1; i <= k; i++) {
                ll temp = mex(a,n);
                for(ll j = n-1; j > 0; j--){
                    a[j] = a[j-1];
                }
                a[0] = temp;
            }
        }
        else {
            for(ll i = 1; i <= (k%n)+1; i++){
                ll temp = mex(a,n);
                for(ll j = n-1; j > 0; j--){
                    a[j] = a[j-1];
                }
                a[0] = temp;
            }
            // cout<<(k%n)+1<<endl;
        }
        
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
