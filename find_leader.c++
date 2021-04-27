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
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      cout<<a[n-1]<<" ";
      long long  s=a[n-1];
      for(int i=n-2;i>=0;i--)
      {
        if(a[i]>=s)
        {
          cout<<a[i]<<" ";
          s=a[i];
        }
      }
      cout<<endl;
    }
    return 0;
  }
