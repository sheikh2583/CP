// Problem: Permutations
// Link: https://cses.fi/problemset/task/1070
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-27

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
cin>>x;
vector<int> k;
if(x==1)
cout<<1;
else if(x==2|| x==3)
{
    cout<<"NO SOLUTION"<<endl;
}
else
    {
    for(int i=2; i<=x; i=i+2)
    {
        k.push_back(i);
    }
    for(int i=1; i<=x; i=i+2)
    {
        k.push_back(i);
    }
    for(int x: k)
    {
        cout<<x<<" ";
    }
}
 
 
}