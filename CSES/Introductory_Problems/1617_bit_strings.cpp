// Problem: Bit Strings
// Link: https://cses.fi/problemset/task/1617
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-29
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
 
int bin_pow(int a, int b)
{
    a=a%MOD;
    if(b==0) return 1;
    int res =1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%MOD;
        }
        a=a*a%MOD;
        b>>=1;
    }
    return res;
}
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
int result=bin_pow(2,n);
cout<<result;
 
 
}