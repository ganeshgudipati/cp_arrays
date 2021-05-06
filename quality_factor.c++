#include <bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  int main()
  {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
      cin>>a[i];
    ll current=0, sum=0;
    for(ll i=0; i<n; i++)
    {
      sum+=abs(a[i]-current);
      current=a[i];
    }
    cout<<sum<<endl;
    return 0;
  }
