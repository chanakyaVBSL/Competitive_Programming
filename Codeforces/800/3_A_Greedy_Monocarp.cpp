// Created by chanakya_SGTO on 20-Dec-24 14:27:51.
// Educational Codeforces Round 172 (Rated for Div. 2) 
// A. Greedy Monocarp.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        int n, k, cnt = 0, sum = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            sum += a;
            v.push_back(a);
        }
        if (sum <= k) cnt += (k - sum);
        else {
            sort(v.rbegin(), v.rend());
            for (auto a: v) {
                if (a < k) k -= a;
                else if (a > k) {
                    cnt += k; break;
                }
                else break;
            }
        }
        cout << cnt << "\n";
    }
}