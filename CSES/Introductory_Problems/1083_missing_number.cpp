// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-27
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    int n;
    cin>>n;
    vector<int> k(n,0); 
    for(int i =0; i<n-1; i++)
    {
        int x;
        cin>>x;
        x--;
        k[x]++;
    }
    for(int i =0; i<n; i++)
    {
        if(k[i]==0)
        cout<<i+1<<endl;
    }
 
}