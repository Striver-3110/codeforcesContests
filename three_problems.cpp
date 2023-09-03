#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fS(int &n)
{
    bool neg = false;
    char c;
    n = 0;
    c = getchar();
    if (c == '-')
    {
        neg = true;
        c = getchar();
    }
    for (; c > 47 && c < 58; c = getchar())
    {
        n = n * 10 + c - 48;
    }
    // if(neg)n=n*(-1)
}
int main()
{
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    // fS(t);
    cin>>t;
    // cout << t;
    vector<int> a(t, 0);
    map<int ,int> m;
    for (int i = 0; i < t; i++)
    {
        // fS(a[i]);
        cin>>a[i];
    }
    sort(a.begin(), a.end());int c=0;
    for (int i = 0; i < t; i++)
    {
        if (m[a[i]] != 1)
        {
            m[a[i]] = 1;
            c++;
        }
    }
    if(c<3)cout<<-1 -1 -1<<endl;
    else{
        // cout<<"else is true";
    std::map<int,int>::iterator it=--m.end();
    int cnt=3;
    for(c=1;c<=3;it--,c++){
        cout<<it->first<<" ";
    }
    }
}