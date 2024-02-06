#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    bool flag = true;

    for (int i = 0; i < s.length(); i++)
    {

        if (i == 0 && s[i] == '-')
            continue;
        else if (s[i] == '.')
            continue;
        else if (s[i] >= 48 && s[i] <= 57)
        {

            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Numeric constant\n";
    }
    else
    {

        cout << "Not numeric\n";
    }
}