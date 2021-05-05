#include <bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  bool fun(int a,int b)
  {
    float f=float(a)+0.0;
    bool r=true;
    if(b<=(f/2)+7)
      r=false;
    else if(b>100 && a<100)
      r=false;
    else if(b>a)
      r=false;
    return r;
  }
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int a[n],freq[121];
    ll count;
    for(int i=0;i<121;i++)
    {
      freq[i]=0;
    }
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      freq[a[i]]=freq[a[i]]+1;
    }
    sort(a,a+n);
    for(int i=120;i>0;i--)
    {
      for(int j=i;j>0;j--)
      {
          int k=freq[i]-1;
          if(i==j)
          {
              float f=float(i)+0.0;
              f=(f/2)+7;
              if(i>f)
              {
                count=count+(freq[i]*k);
              }
          }
          else if(fun(i,j))
          {
            count=count+(freq[i]*freq[j]);
          }
      }
    }
    cout<<count;
    return 0;
  }
