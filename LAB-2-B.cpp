#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int optNum = 1;
    cin >> s;

    bool flag = false;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '=')
        {
            flag = true;

            cout << "operator" << optNum << ": " << s[i] << "\n";
            optNum++;
        }
    }

    if (!flag)
    {
        cout << "Operator not found\n";
    }
}