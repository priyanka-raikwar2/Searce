#include<bits/stdc++.h>
using namespace std;
void find_frequency(vector<int>v)                  //finding maximum frequency by implementing hashing using map
{
int count=0,res;
unordered_map<int,int>hsh;
int n=v.size();
for(int i=0;i<n;i++)
{
hsh[v[i]]++;
}
for(auto i: hsh)
{
if(count<i.second)
{
res=i.first;
count=i.second;
}
}
cout<<res;
return;
}
int main()
{

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
cin>>v[i];
}
find_frequency(v);
return 0;
}
