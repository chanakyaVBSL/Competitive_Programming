// Created by chanakya_SGTO on 15-Oct-24 12:50:42.
// CSES Problem Set 
// Weird Algorithm.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1; // cin >> T;
    while (T--) {
        long long int n;
        cin >> n;
        cout << n << " ";
        while (n != 1) {
            if (n & 1) n = n * 3 + 1;
            else n /= 2;
            cout << n << " ";
        }
    }
}