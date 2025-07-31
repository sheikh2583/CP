// Problem: Number Spiral
// Link: https://cses.fi/problemset/task/1071
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-28

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>y>>x;
    if(y>x)
    {
        if(y%2)
        {
            cout<<(y-1)*(y-1)+x<<endl;
        }
        else
            cout<<y*y-(x-1)<<endl;
    }
    else
    {
        if(x%2)
        {
            cout<<x*x-(y-1)<<endl;
        }
        else
            cout<<(x-1)*(x-1)+y<<endl;
    }
 
}
 
 
}