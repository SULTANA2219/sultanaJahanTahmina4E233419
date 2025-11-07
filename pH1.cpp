/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: H
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;
    long long prod = n * k;
    if (prod % a != 0) {
        cout << "double" << endl;
    } else {
        long long val = prod / a;
        if (val <= 2147483647) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }
    return 0;
}

