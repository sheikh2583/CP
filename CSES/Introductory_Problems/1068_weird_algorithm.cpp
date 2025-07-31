// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-27

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    int n;
    vector<int> k;
    cin>>n;
    k.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        n=n*3+1;
        k.push_back(n);
    }
 
    for(int x : k)
    {
        cout<<x<<" ";
    }
}