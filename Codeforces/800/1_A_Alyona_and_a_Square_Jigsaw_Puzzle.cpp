// Created by chanakya_SGTO on 18-Dec-24 10:06:40.
// Codeforces Round 990 (Div. 2) 
// A. Alyona and a Square Jigsaw Puzzle.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    while (T--) {
        int n, sum = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        for (auto a: v) {
            sum += a;
            int b = sqrt(sum);
            if (b * b == sum && (b & 1)) cnt ++;
        }
        cout << cnt << "\n";
    }
}