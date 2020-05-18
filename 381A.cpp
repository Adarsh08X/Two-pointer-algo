#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   int n,s=0,d=0;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++)
   {
     int x;
     cin>>x;
     v.push_back(x);
     }
     int i=0,j=n-1,k=0;
        while(k!=n)
        {
          if(k%2==0)
          {
            if(v[i]>v[j])
            {
              s+=v[i];
               v[i]=0;
              i++;
             
            }
            else{
              s+=v[j];
               v[j]=0;
              j--;
             
            }
          }
          else{
            if(v[i]>v[j])
            {
              d+=v[i];
               v[i]=0;
              i++;
            }
            else{
              d+=v[j];
              v[j]==0;
              j--;
            }
          }
          k++;
        }
      
        cout<<s<<" "<<d<<endl;
   
    }
