/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: B
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0)
    cout<<"Both"<<endl;
    else if(a%k==0 && b%k != 0) cout<<"Memo"<<endl;
    else if(b%k==0 && a%k != 0) cout<<"Momo"<<endl;
    else cout<<"No One"<<endl;
    return 0;
}
