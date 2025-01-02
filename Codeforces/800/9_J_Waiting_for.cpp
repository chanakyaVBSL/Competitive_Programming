// Created by chanakya_SGTO on 02-Jan-25 09:24:18.
// 2024 
// J. Waiting for....

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T,  queue = 0;
    cin >> T;
    while (T--) {
        char c;
        int a;
        cin >> c >> a;
        if (c == 'P') queue += a;
        else if (a > queue) {
            cout << "YES\n";
            queue = 0;
        }
        else {
            cout << "NO\n";
            queue -= a;
        }
    }
}