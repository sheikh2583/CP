// Problem: Palindrome Reorder
// Link: https://cses.fi/problemset/task/1755
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
string s;
cin>>s;
unordered_map<char,int> freq;
for(auto ch : s)
{
    freq[ch]++;
}
int oddCount=0;
char oddChar;
for( auto [ch,count]: freq)
{
    if(count%2){
    oddCount++;
    oddChar=ch;
    }
}
 
if(oddCount>1)
{
    cout<<"NO SOLUTION"<<endl;
}
 
else
{
    string first="";
    string mid="";
    for (auto [ch, count] : freq)
    {
        if(count%2)
        {
            for(int i=0; i<count; i++)
            {
                mid+=ch;
            }
        }
        else
        for(int i=0; i<count/2; i++)
        {
            first+=ch;
        }
    }
 
    string second =first;
    reverse(second.begin(), second.end());
    cout<<first+mid+second<<endl;
}
}