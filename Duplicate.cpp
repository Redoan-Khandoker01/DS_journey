#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool dubol = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            dubol = true;
            break;
        }
    }
    if (dubol)
    {
        cout << "YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}