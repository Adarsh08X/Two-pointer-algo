#include<iostream>
using namespace std;
int sgn(int x)
{
   if(x>0)
 {
     return 1;
 }
    if(x<0)
{
 return -1;
}
}
int main()
{
 int T;
 cin>>T;
 while(T--)
 {
    long long int n,sum=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         int j=i;
        int curr=a[i];
         while(j<n&&sgn(a[j])==sgn(a[i]))
         {
             curr=max(curr,a[j]);
            j++;
         }
         sum+=curr;
         i=j-1;
     }
     cout<<sum<<endl;
 }
}