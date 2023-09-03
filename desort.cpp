#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

void solve() {
    int a;
    cin >> a;
    vector<long long int> arr(a); // Use std::vector for dynamic memory allocation
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    bool flg = true;
    for (int i = 0; i < a - 1; i++) {
        if (arr[i] > arr[i + 1]) flg = false;
    }
    long long int minDif = LLONG_MAX;
    if (flg) {
        for (int i = 0; i < a - 1; i++) {
            minDif = min(minDif, arr[i + 1] - arr[i]);
        }
        cout << (minDif / 2) + 1 << endl;
    }
    else cout<<0<<endl;
    
    
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
