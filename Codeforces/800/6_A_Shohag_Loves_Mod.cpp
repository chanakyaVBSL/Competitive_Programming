// Created by chanakya_SGTO on 27-Dec-24 21:26:35.
// CodeTON Round 9 (Div. 1 + Div. 2, Rated, Prizes!) 
// A. Shohag Loves Mod.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; cin >> T;
    vector<int> v;
    for (int i = 1; i <= 100; i+=2) v.push_back(i);
    while (T--) {
        int n; cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << v[i]  << " ";
        }
        cout << "\n";
    }
}