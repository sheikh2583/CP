// Problem: Raab Game 1
// Link: https://cses.fi/problemset/task/3399
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-08-1

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INTMAX = 1e9;
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int n,a,b;
    cin>>n>>b>>a;
    if((a>b && b==0)|| (b>0 && a==0) || ((a+b)>n))
    cout<<"NO"<<endl;
    else{
    vector<int> val(n);
    iota(val.begin(), val.end(), 1);
    cout<<"YES"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<val[i]<<" ";
    }    
    cout<<endl;
    for(int i=b; i<b+a; i++)
    {
        cout<<val[i]<<" ";
    }
    for(int i=0; i<b; i++)
    {
        cout<<val[i]<<" ";
    }
    for(int i= a+b; i<n; i++)
    {
        cout<<val[i]<<" ";
    }
        cout<<endl;
    }
 
 
}
}