#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    long long t,n;
    long long ts,s;
    cin>>t;
    while(t--)
    {
      cin>>n;
      long long a[n];
      ts=((n+1)*n)/2;
      for(long i=0;i<n-1;i++)
      {
        cin>>a[i];
        ts=ts-a[i];
      }
      cout<<ts<<endl;
    }
    return 0;
  }
