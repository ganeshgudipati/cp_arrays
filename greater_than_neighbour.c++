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
      int count=0;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      if(a[0]>a[1])
      {
        cout<<"0"<<" ";
        count++;
      }
      for(int i=1;i<n-1;i++)
      {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
          cout<<i<<" ";
          count++;
        }
      }
      if(a[n-1]>a[n-2])
      {
        cout<<n-1;
        count++;
      }
      else if(count==0)
      {
        cout<<"-1";
      }
      cout<<endl;
    }
    
    return 0;
  }
