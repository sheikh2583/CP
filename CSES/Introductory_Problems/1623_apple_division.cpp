// Problem: CApple Division
// Link: https://cses.fi/problemset/task/1623
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-31

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INTMAX = 1e9;
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
cin>>x;
int total=1LL<<x;
vector<string> binarystrings;
for(int i=1; i<total+1; i++)
{
    bitset<21>b(i);
    binarystrings.push_back(b.to_string().substr(21-x));
}
vector<int> values;
for(int i=0; i<x; i++)
{
    int k;
    cin>>k;
    values.push_back(k);
}
int difference=INTMAX;
for(auto str : binarystrings)
{
    int one=0;
    int two=0;
    for(int i=0; i<x; i++)
    {
        if(str[i]=='0')
        {
            one+=values[i];
        }
        else if(str[i]=='1')
        {
            two+=values[i];
        }
    }
    difference=min(difference,abs(one-two));
}
 
cout<<difference;
}