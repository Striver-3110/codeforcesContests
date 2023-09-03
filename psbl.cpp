// #include<iostream>
// using namespace std;
// #include<vector>
// #include<string>
// #include<algorithm>

// #define ll long long int
// #define ull unsigned long long int
#define IOS ios::sync_with_stdio(NULL); cin.tie(NULL);cout.tie(NULL);
// #define sort(a)  sort(a.begin(),a.end())
// #define pb push_back
// #define el "\n"

// int main(){
//     IOS;cin.tie(NULL);cout.tie(NULL);
//     freopen("in.txt","r",stdin);
//     freopen("out.txt","w",stdout);
//     int t;
//     cin>>t;
//     while(t--){
//         string s1,s2;
//         cin>>s1>>s2;
//         int l = 0, r = s1.length()-1, lzcnt = 0, locnt = 0, rzcnt = 0 , rocnt = 0;
//         while(s1[l] == s2[l] || s1[r] == s2[r]){
//             if(l>r)break;
//             if(s1[l] == s2[l]){
//                 if(s1[l] == '0' && lzcnt == 0){
//                     lzcnt = 1;
//                 }
//                 if(s1[l] == '1' && locnt == 0){
//                     locnt = 1;
//                 }
//                 l++;
//             }
//             if(s1[r] == s2[r]){
//                 if(s1[r] == '0' && rzcnt == 0){
//                     rzcnt = 1;
//                 }
//                 if(s1[r] == '1' && rocnt == 0){
//                     rocnt = 1;
//                 }
//                 r--;
//             }
//         }
//         // cout<<l<<" "<<r<<endl;
//         int ttlcntr = rzcnt + rocnt;
//         int ttlcntl = lzcnt + locnt;
//         if(ttlcntr == 1 && ttlcntl == 1){
//             if(rzcnt == 1 &&  lzcnt == 1){
//                 cout<<"YESz1"<<endl;
//             }
//             else if(rocnt == 1 && locnt == 1)cout<<"YESo1"<<endl;
//             else cout<<"NO"<<endl;
//         }
//         else if(ttlcntr == 0 && ttlcntl == 0)cout<<"NO"<<endl;
//         else if((ttlcntl == 2 && ttlcntr == 2) || (ttlcntl == 2 && ttlcntr == 1) || (ttlcntl == 1 && ttlcntr == 2))cout<<"YES"<<endl;

//     }
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// int main() {
//     IOS;
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string s;
//         cin >> s;
        
//         int n = s.size();
//         bool found = false;
        
//         // Try all possible combinations by removing digits
//         for (int i = 1; i < (1 << n); ++i) {
//             string sequence = "";
//             for (int j = 0; j < n; ++j) {
//                 if (i & (1 << j)) {
//                     sequence += s[j];
//                 }
//             }
            
//             // Check if the sequence is prime
//             int num = stoi(sequence);
//             if (isPrime(num) && num >= 11) {
//                 cout << num << endl;
//                 found = true;
//                 break;
//             }
//         }
        
//         if (!found) {
//             cout << -1 << endl;
//         }
//     }
    
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

bool canMakeEqual(string a, string b) {
    int n = a.size();
    int diffCount = 0;

    for (int i = 1; i < n - 1; i++) {
        if (a[i] != b[i]) {
            if (diffCount == 0) {
                diffCount++;
                while (i < n - 1 && a[i] != a[i + 1]) {
                    i++;
                }
            } else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        if (canMakeEqual(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
