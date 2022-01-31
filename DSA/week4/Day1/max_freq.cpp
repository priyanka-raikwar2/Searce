#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
char c,ch;
int x,countt=0;
unordered_map<int,int>hashh;
int n=str.length();
for(int i=0;i<n;i++)
{
c=str[i];
x=c;
if(x>=97)
{
hashh[x-97]++;
}
else
hashh[x-65]++;
}
for(auto i: hashh)
{
if(i.second>countt)
{
countt=i.second;
ch=i.first+65;
}
}
cout<<"Frequency of character"<<" "<<ch<<" "<<" is maximum that is "<<countt<<endl;
return 0;
}
