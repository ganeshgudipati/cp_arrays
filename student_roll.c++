#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
      cin>>a[j];
      if(j%2==0)
      {
        cout<<a[j]<<" ";
      }
    }
    cout<<endl;
    
  }
  return 0;
}
