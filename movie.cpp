#include<iostream>
#include<vector>
#include<set>
using namespace std;


#define ll long long
#define f first
#define s second
#define vl vector<ll>
#define pll pair<ll,ll>
#define fr(i,a,n) for(ll i = a; i < n; i++)


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 


#define fast_io ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define file_io freopen("in.txt", "r+", stdin);freopen("out.txt", "w+", stdout);freopen("err.txt", "w+", stderr);


//------------------------------------------------------------DSU-------------------------------------------------//
vll parent;
vll size_of;
void create_dsu(ll n){parent.clear();size_of.clear();parent.resize(n);size_of.resize(n);fo(i,0,n-1) parent[i]=i;}
ll find(ll u){if(u==parent[u]) return u;return parent[u]=find(parent[u]);}
void union_bypath(ll u,ll v){ll x=parent[u],y=parent[v];if(x==y) return ;if(size_of[x]>size_of[y]) swap(x,y);parent[x]=y;size_of[y]=max(size_of[y],size_of[x]+1);}
//------------------------------------------------------------------DSU------------------------------------------------//



void solve(){
    int n,d,m; cin>>n>>m>>d;
    vl v(n);
    for(auto &a : v)cin>>a;
    // for(auto a : v)cout<<a<<" ";
    multiset<pll> mst;
    set<ll> st;
    ll cnt = 0, ans = 0;
    fr(i,0,n){
        if(v[i] < 0)continue;
        cnt += v[i];
        mst.insert({v[i],i+1});
        st.insert(i+1);

        if(mst.size() > m){
            cnt -= (*mst.begin()).f;
            st.erase((*mst.begin()).s);
            mst.erase(mst.begin());
        }
        ans = max(ans , cnt - d * (*st.rbegin()));
    }
    cout<<ans<<endl;

// just to understand how this set and multiset are working*************************************************************************************

            // cout << "Contents of mst: ";
            //     for (auto p : mst) {
            //         cout << "(" << p.first << ", " << p.second << ") ";
            //     }
            //     cout << endl;

            //     cout << "Contents of st: ";
            //     for (auto idx : st) {
            //         cout << idx << " ";
            //     }
            //     cout << endl;

// just to understand how this set and multiset are working*************************************************************************************
    
}

int main(){
    fast_io;
    #ifndef ONLINE_JUDGE 
    file_io; 
    #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}