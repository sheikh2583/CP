// Problem: Two Sets
// Link: https://cses.fi/problemset/task/1092
// Author: SegFaultSniper
// Status: Solved
// Date: 2025-07-28

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
int res=n*(n+1)/2;
vector<int> k;
for(int i=1; i<=(int)n; i++)
{
    k.push_back(i);
}
reverse(k.begin(), k.end());
if(res%2)
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    vector<int> one,two;
    res=res/2;
    int sum=0;
    for(int i=n; i>=(int)1;i--)
    {
        if(i<=res)
        {
            one.push_back(i);
            res-=i;
        }
        else
        {
            two.push_back(i);
        }
 
    }
    cout<<two.size()<<endl;
    for(int it : two)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<one.size()<<endl;
    for(int it : one){
        cout<<it<<" ";
    }
}
 
}