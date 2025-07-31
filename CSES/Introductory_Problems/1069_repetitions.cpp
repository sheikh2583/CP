// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1069
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-27
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
string s;
cin>>s;
int count=1;
int sequence=1;
for(int i=1; i<(int)s.size();i++)
{
    if(s[i]==s[i-1])
    {
        sequence++;
    }
    else
    {
        count=max(count,sequence);
        sequence=1;
    }
    count=max(count, sequence);
}
 
cout<<count;
}