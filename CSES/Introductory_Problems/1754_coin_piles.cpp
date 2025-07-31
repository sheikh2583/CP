// Problem: Coin Piles
// Link: https://cses.fi/problemset/task/1754
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
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    if(x==y)
    {
        if((x+y)%3==0)
        {
            cout<<"YES"<<endl;
        }
        else 
        cout<<"NO"<<endl;
    }
    else
    {
        if((x+y)%3==0)
        {
            if(max(x,y)<=(min(x,y))*2)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}
}