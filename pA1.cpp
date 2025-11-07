/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: A
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
double P, X, originalPrice;
cin>>X>>P;
originalPrice = (P/(1-(X/100)));
cout<<fixed<<setprecision(2)<<originalPrice<<endl;
return 0;
}
