#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    int n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      long a[n];
      long k;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      cin>>k;
      int i1=0,j1=n-1;
      bool found=false;
      while(i1!=j1)
      {
        if(a[i1]+a[j1]==k)
        {
          found=true;
          break;
        }
        else if(a[i1]+a[j1]<k)
        {
          i1++;
        }
        else
        {
          j1--;
        }
      }
      if(!found)
      {
        cout<<"no answer"<<endl;
      }
      else
      {
        cout<<i1<<" "<<j1<<endl;
      }
    }
    return 0;
  }
