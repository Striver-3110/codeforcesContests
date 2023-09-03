// #include<iostream>
// #include<vector>
// #include<algorithm>
// // #include <bits/stdc++.h>
// using namespace std;

// #define pb(a) push_back(a)
// #define maxLen (int)50
// #define vl vector<ll>
// #define vi vector<int>

// #define ll long long
// #define nl "\n"
// int32_t main(){
//     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//     freopen("in.txt","r",stdin);
//     freopen("out.txt","w",stdout);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n==1)cout<<"NO"<<endl;
//         else
//         {
//             ll cnt = 0, others = (ll)0;
//             for(int i = 0 ; i < n ; i++){
//                 ll a;
//                 cin>>a;
//                 if(a==1)cnt++;
//                 else{
//                     others += a;
//                 }
//             }
//             if(cnt >= others )cout<<"NO"<<endl;
//             else cout<<"YES"<<endl;
//         }
//     }

// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb(a) push_back(a)
#define maxLen (int)50
#define vl vector<ll>
#define vi vector<int>

#define ll long long
#define nl "\n"

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            ll a;

            cin >> a;
            cout << "NO" << endl;
        } else {
            ll cnt = 0, others = 0; // Initialize 'others' to zero here
            for (int i = 0; i < n; i++) {
                ll a;
                cin >> a;
                if (a == 1) cnt++;
                else others += a;
            }
            // cout<<cnt<<" "<<others<<endl;
            if (cnt > others || cnt == others) {
                cout << "NO" << endl;
            } else if(cnt < others){
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
