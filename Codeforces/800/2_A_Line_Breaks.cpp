// Created by chanakya_SGTO on 19-Dec-24 09:34:24.
// Codeforces Round 991 (Div. 3) 
// A. Line Breaks.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        int n, m, cnt = 0, total = 0;
        cin >> n >> m;
        vector<int> v;
        while (n--) {
            string s; cin >> s;
            v.push_back(s.size());
        }
        for (auto a: v) {
            if (total + a <= m) {
                total += a;
                cnt++;
            }
            else break;
        }
        cout << cnt << "\n";
    }
}

/* Mystery TLE
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        int n, m, cnt = 0, total = 0;
        cin >> n >> m;
        while (n--) {
            string s; cin >> s;
            int val = s.size();
            if (total + val <= m) {
                cnt++;
                total += val;
            }
            else break;
        }
        cout << cnt << "\n";
    }
}
*/