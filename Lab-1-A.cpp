#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size, arr[100], sum = 0;
    cout << "Enter the size of array :";
    cin >> size;

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
        sum += arr[i];
    }

    float avg;

    avg = sum * 1.0 / size;

    cout << avg << "\n";
}