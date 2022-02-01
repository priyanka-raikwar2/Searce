#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[1000];
int n,v,j;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
v=arr[i];
j=i;
while(arr[j-1]>v && j>=1)
{
arr[j]=arr[j-1];
j--;
}
arr[j]=v;
}
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;

}
