// Created by chanakya_SGTO on 22-Oct-24 12:25:56.
// CSES Problem Set 
// Increasing Array.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; // cin >> T;
    while (T--) {
        int n; cin >> n;
        long long int steps = 0;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        for (int i = 1; i < n; ++i) {
            if (v[i] < v[i - 1]) {
                int val = v[i - 1] - v[i];
                v[i] += val;
                steps += val;
            }
        }
        cout << steps;
    }
}