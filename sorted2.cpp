
#include<iostream>
#include<vector>
#include<algorithm>
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vl v;
        ll* arr = new ll[n]; // Use dynamic array instead of fixed-size array
        for (int i = 0 ; i < n ; i++) {
            ll a;
            cin >> a;
            v.pb(a);
        }
        std::copy(v.begin(), v.end(), arr); // Use std::copy with iterators

        std::sort(arr, arr + n); // Sort the dynamic array

        bool flg = false;
        for (int j = n - 1; j >= 0 ; j--) {
            if (arr[j] != v[j]) {
                cout << arr[j] << nl;
                flg = true;
                break;
            }
        }
        if (!flg) {
            cout << 0 << nl;
        }

        // Don't forget to delete the dynamically allocated array
        delete[] arr;
    }

    return 0;
}
