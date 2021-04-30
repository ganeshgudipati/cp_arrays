#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      int a[n],b[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int j=0;
      for(int i=n-1;i>=n/2;i--)
      {
        if(j<n)
        {
          b[j]=a[i];
          j=j+2;
        }
      }
      j=1;
      for(int i=0;i<=n/2;i++)
      {
        if(j<n)
        {
           b[j]=a[i];
           j=j+2;
        }
      }
      for(int i=0;i<n;i++)
      {
        cout<<b[i]<<" ";
      }
      cout<<endl;
      
    }
    return 0;
  }
