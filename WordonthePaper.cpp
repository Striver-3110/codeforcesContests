#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <istream>

#define ll long long int
#define pb push_back
#define all(a) a.begin(),a.end()
#define szof(a) a.size()
// #define endl "\n"

void solve(){
    string s[8];
    string answer="";
    for(int i = 0 ; i <8 ; i++){
        cin>>s[i];
    }
    for(int i = 0 ; i < 8 ; i++){
        bool flg = true;
        for(int j = 0 ; j < 8 ; j++){
            if(s[j][i]!='.'){
                answer+=s[j][i];
                flg= false;
            }
        }
        if(!flg)
        answer+=" ";
    }
    std::cout<<answer<<std::endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //     freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}