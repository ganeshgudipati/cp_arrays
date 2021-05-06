#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      int a[n];
      long long sum[n],maxi=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum[i]=0;
      }
      for(int i=0;i<n;i++)
      {
        maxi=INT_MIN;
        for(int j=i;j<n;j=j+k)
        {
          sum[i]=sum[i]+a[j];
          if(sum[i]>maxi)
          {
            maxi=sum[i];
          }
        }
        sum[i]=maxi;
      }
      maxi=INT_MIN;
      for(int i=0;i<n;i++)
      {
        if(sum[i]>maxi)
        {
          maxi=sum[i];
        }
      }
      cout<<maxi<<endl;
    }
    return 0;
  }
