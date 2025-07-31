// Problem: Increasing Array
// Link: https://cses.fi/problemset/task/1094
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
vector<int> k1;
int l;
while(cin>>l)
{   
    k.push_back(l);
}
for(int i=0; i<(int)k.size(); i++){    
if(i>0 && k[i-1]>k[i])
    {
        k1.push_back(k[i-1]-k[i]);
        k[i]=k[i-1];
    }
}
int count=0;
for(int i=0; i<(int)k1.size(); i++){
    count+=k1[i];
}
cout<<count;
 
 
}