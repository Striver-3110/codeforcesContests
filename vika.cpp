#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

#define ll long long int
#define ull unsigned long long int
#define IOS ios::sync_with_stdio(NULL)
#define sort(a)  sort(a.begin(),a.end())
#define pb push_back
#define el "\n"
char dp[25][25];
string s = "vika";
int k = 0;


void solve(int n, int m){
    for(int j = 0; j < n ; j++){
        for(int i = 0; i < m ; j++){
            cin>>dp[j][i];
        }
    }
    for(int j = 0; j < m ; j++){
        for(int i = 0; i < n ; j++){
            if(s[k] == dp[i][j]){
                k++;
                break;
            }
        }
        if(k == 4){
            cout<<"YES"<<el;
            break;
            return;
        }
    }
    cout<<"NO"<<el;

}

int main(){
    IOS;cin.tie(NULL);cout.tie(NULL);
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    cout<<t;
    while(t--){
        int m,n;
        cin>>n>>m;
        solve(n,m);
    }
}