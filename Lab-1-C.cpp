#include <bits/stdc++.h>
using namespace std;

int main()
{

    char a[50], b[50];
    int x, y;
    cout << "Enter the size of first name:";
    cin >> x;

    for (int i = 0; i < x; i++)
    {

        cin >> a[i];
    }

    cout << "Enter the size of last name:";
    cin >> y;

    for (int i = 0; i < y; i++)
    {

        cin >> b[i];
    }

    for (int i = 0; i < x; i++)
    {

        cout << a[i];
    }
    for (int i = 0; i < y; i++)
    {

        cout << b[i];
    }
}