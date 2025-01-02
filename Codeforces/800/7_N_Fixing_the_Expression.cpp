// Created by chanakya_SGTO on 28-Dec-24 12:04:49.
// 2024 
// N. Fixing the Expression.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        string s; cin >> s;
        int a = s[0] - '0', b = s[2] - '0';
        if (a < b) s.replace(1, 1, "<");
        else if (a == b) s.replace(1, 1, "=");
        else s.replace(1, 1, ">");
        cout << s << "\n";
    }
}