// Problem: Traiing Zeros
// Link: https://cses.fi/problemset/task/1618
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-29

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
cin>>x;
int count=0;
for(int i=5; i<=(int)x; i=i*5)
{
    count+=x/i;
}
cout<<count<<endl;
}