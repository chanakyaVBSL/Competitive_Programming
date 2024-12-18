// Created by chanakya_SGTO on 24-Oct-24 09:51:28.
// CSES Problem Set 
// Permutations.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; // cin >> T;
    while (T--) {
        int n; cin >> n;
        if (n == 1 || n > 3) {
            for (int i = n - 1; i > 0; i -= 2) cout << i << " ";
            for (int i = n; i > 0; i -= 2) cout << i << " ";
        }
        else cout << "NO SOLUTION";
    }
}