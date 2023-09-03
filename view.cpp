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

int main(){
    IOS;cin.tie(NULL);cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    // cout<<t;
    while(t--){
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        ll pls=0;
        ll mins = 0;
        for(int i = 0 ; i < s.length(); i++){
            if(s[i] == '+')pls++;
            else mins++;
        }
        ll rpls = (pls - mins)>0 ? pls - mins : 0 ;
        ll mxv = a + pls;
        ll mnv = a + rpls;
        if(mxv >= n && mnv >= n)cout<<"YES"<<endl;
        else if(mxv >= n && mnv < n)cout<<"MAYBE"<<endl;
        else if(mxv < n && mnv < n)cout<<"NO"<<endl;
    }
}