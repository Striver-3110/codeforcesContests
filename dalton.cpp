#include <iostream>
using namespace std;

#define nl "\n"
#define ll long long



int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++){
            int l;
            cin>>l;
            if(l == i)cnt++;
        }
        if(cnt%2 == 0)cout<<cnt/2<<nl;
        else cout<<( cnt / 2 ) + 1<<nl;
    }


}