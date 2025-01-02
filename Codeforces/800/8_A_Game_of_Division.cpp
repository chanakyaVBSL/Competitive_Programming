// Created by chanakya_SGTO on 02-Jan-25 09:07:18.
// Codeforces Round 992 (Div. 2) 
// A. Game of Division.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1;  cin >> T;
    while (T--) {
        int n, k, flg2 = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        for (int i = 0; i < n; ++i) {
            int flg = 1;
            for (int j = 0; j < n; ++j) {
                if (i != j && abs(v[i] - v[j]) % k == 0) {
                    flg = 0; break;
                }
            }
            if (flg == 1) {
                flg2 = 1;
                cout << "YES\n" << i + 1 << "\n";
                break;
            }
        }
        if (flg2 == 0) cout << "NO\n";
    }
}