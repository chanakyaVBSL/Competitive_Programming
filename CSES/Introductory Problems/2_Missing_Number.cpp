// Created by chanakya_SGTO on 15-Oct-24 12:55:25.
// CSES Problem Set 
// Missing Number.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; // cin >> T;
    while (T--) {
        long long int n, sum = 0;
        cin >> n;
        for (int i = 0; i < n - 1; ++i) {
            int a; cin >> a;
            sum += a;
        }
        cout << (n * (n + 1)) / 2 - sum;
    }
}