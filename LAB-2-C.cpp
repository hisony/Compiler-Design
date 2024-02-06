#include <bits/stdc++.h>
using namespace std;

bool isSingleline(string s)
{

    if (s[0] == '/' && s[1] == '/')
        return true;

    return false;
}

bool isMultiLine(string s)
{

    if (s[0] == '/' && s[1] == '*' && s[s.length() - 2] == '*' && s[s.length() - 1] == '/')
    {

        return true;
    }
    return false;
}
int main()
{

    string s;
    getline(cin, s);

    // cout<<isSingleline(s);

    if (isSingleline(s))
        cout << "Single line comment";
    else if (isMultiLine(s))
        cout << "Multi line comment";
    else
        cout << "No comments line detected";
}