// Created by chanakya_SGTO on 27-Dec-24 21:00:35.
// Codeforces Round 988 (Div. 3) 
// A. Twice.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        int n, cnt = 0;
        cin >> n;
        map<int, int> m;
        while (n--) {
            int a; cin >> a;
            m[a]++;
        }
        for (auto &[x, y]: m) cnt += (y / 2);
        cout << cnt << "\n";
    }
}