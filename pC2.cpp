/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: C
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int even = 0, odd = 0, positive = 0, negative = 0;
    
    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        
        if (X % 2 == 0)
            even++;
        else
            odd++;
        
        if (X > 0)
            positive++;
        else if (X < 0)
            negative++;
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    
    return 0;
}

