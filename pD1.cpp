/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: D
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // List of operator pairs: 0=+, 1=-, 2=*
    vector<pair<int, int>> ops = {
        {0, 1}, {0, 2}, {1, 0}, {1, 2}, {2, 0}, {2, 1}
    };
    
    bool possible = false;
    for (auto& op : ops) {
        long long res;
        if (op.first == 0) { // +
            if (op.second == 1) res = a + b - c;
            else res = a + b * c;
        } else if (op.first == 1) { // -
            if (op.second == 0) res = a - b + c;
            else res = a - b * c;
        } else { // *
            if (op.second == 0) res = a * b + c;
            else res = a * b - c;
        }
        if (res == d) {
            possible = true;
            break;
        }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
