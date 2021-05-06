#include <bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  int main()
  {
    //write your code here
    int t;
    ll n,k;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      ll a[n];
      ll tt=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        if(i==n-1)
        {
          tt=tt+k;
        }
        else if(a[i+1]<=a[i]+k-1)
        {
          tt=tt+a[i+1]-a[i];
        }
        else
        {
          tt=tt+k;
        }
      }
      cout<<tt<<endl;
    }
    
    return 0;
  }
