#include<bits/stdc++.h>
using namespace std;
int hsh[10000][2];
void search_element(int x)                        // to search element in hash table, where x is the element to be searched
{
 if(x>=0)
 {
 if(hsh[x][0]==1)
  {
  cout<<"element is present"<<endl;
  return;
  }
  else
  {
  cout<<"element is not present"<<endl;
  return;
  }
 }
 else
 {
  if(hsh[abs(x)][1]==1)
  {
  cout<<"element is present"<<endl;
  return ;
  }
  else{
  cout<<"element is not present"<<endl;
  return ;
  }

 }
 return ;
}
void insert(vector<int>v)                     // inserting values in hash table
{
int n=v.size();
for(int i=0;i<n;i++)
{
if(v[i]>=0)
{
hsh[v[i]][0]=1;
}
else
hsh[abs(v[i])][1]=1;
}
return;
}

int main()
{
int n,x;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
cin>>v[i];
}
insert(v);
cin>>x;
search_element(x);
return 0;

}
