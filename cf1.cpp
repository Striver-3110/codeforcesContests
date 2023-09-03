#include <iostream>
using namespace std;
#include <string>
#include <map>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool flg = false;
        // map <char,int> mp;
        int que = 0;
        int initque = 0;
        bool init = false;
        if (str[0] == '0')
        {
            flg = true;
        }
        if (flg == true)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == '?')
                {
                    if (str[i] != '?' && init == false)
                    {
                        init = true;
                        initque++;
                    }
                    que++;
                }
            }
            if (initque == 1)
            {
                switch (que)
                {
                case 1:
                    cout << 9 << endl;
                    break;
                case 2:
                    cout << 99 << endl;
                    break;
                case 3:
                    cout << 999 << endl;
                    break;
                case 4:
                    cout << 9999 << endl;
                    break;
                }
            }
            if (initque == 2)
            {
                switch (que)
                {
                case 2:
                    cout << 90 << endl;
                    break;
                case 3:
                    cout << 990 << endl;
                    break;
                case 4:
                    cout << 9990 << endl;
                    break;
                }
            }
            if (initque == 3)
            {
                switch (que)
                {
                case 3:
                    cout << 900 << endl;
                    break;
                case 4:
                    cout << 9900 << endl;
                    break;
                }
            }
            if (initque == 4)
            {
                cout << 9000 << endl;
            }
            if (initque == 5)
            {
                cout << 90000 << endl;
            }
        }
    }
}
