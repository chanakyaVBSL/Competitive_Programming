// Created by chanakya_SGTO on 22-Oct-24 12:18:24.
// CSES Problem Set 
// Repetitions.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; // cin >> T;
    while (T--) {
        string s; cin >> s;
        int ans = 1, temp = 1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) temp++;
            else temp = 1;
            ans = max(ans, temp);
        }
        cout << ans;
    }
}