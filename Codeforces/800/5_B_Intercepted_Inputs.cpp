// Created by chanakya_SGTO on 27-Dec-24 21:08:40.
// Codeforces Round 988 (Div. 3) 
// B. Intercepted Inputs.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1;  cin >> T;
    while (T--) {
        int n; cin >> n;
        int st = 0, en = n - 1;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        sort(v.begin(), v.end());
        while (st < en) {
            int val = v[st] * v[en];
            if (val == n - 2) {
                cout << v[st] << " " << v[en] << "\n";
                break;
            }
            else if (val > n - 2) en--;
            else st++;
        }
    }
}