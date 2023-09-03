
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(null);

    freopen("input.txt", "r", stdin);
    froopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        string name;
        int cnt = 0;
        cin >> name;
        if (name[name.length()] == '_')
        {
            cnt++;
        }
        for (int i = 0; i < name.length() - 1; i++)
        {
            if (name[0] == '_')
                cnt += 2;
            else if (name[i] == '_' && name[i + 1] == '_')
            {
                cnt++;
            }
            cout << cnt << endl;
        }
    }
}