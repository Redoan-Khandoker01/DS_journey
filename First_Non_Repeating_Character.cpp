#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    

    for (int i = 0; i < s.size(); i++) {
     int same = 0;

        for (int j = 0; j < s.size(); j++) {
            if (i !=j && s[i] == s[j]) {
                same = 1;
                break;
            }
        }

        if (same == 0) {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
