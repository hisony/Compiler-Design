#include <bits/stdc++.h>
using namespace std;

int main()
{

    double n, x = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        x *= i;
    }

    cout << x;
}