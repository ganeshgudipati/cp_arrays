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
      int high1=a[0],high2=a[0];
      int low1=a[0],low2=a[0];
      for(int i=0;i<n;i++)
      {
        if(a[i]+i>high1)
        {
          high1=a[i]+i;
        }
        else if(a[i]+i<low1)
        {
          low1=a[i]+i;
        }
        if(a[i]-i>high2)
        {
          high2=a[i]-i;
        }
        else if(a[i]-i<low2)
        {
          low2=a[i]-i;
        }
      }
      int a1=high1-low1;
      int a2=high2-low2;
      
      cout<<max(a1,a2)<<endl;
    }
    return 0;
  }
