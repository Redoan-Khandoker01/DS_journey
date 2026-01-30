#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N), prefix(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
        prefix[i] = sum;
    }

    // reverse order print
    for (int i = N - 1; i >= 0; i--) {
        cout << prefix[i] << " ";
    }

    return 0;
}
