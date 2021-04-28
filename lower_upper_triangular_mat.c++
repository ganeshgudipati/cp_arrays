#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>a[i][j];
      }
    }
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i<j)
        {
          cout<<"0"<<" ";
        }
        else
        {
          cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i>j)
        {
          cout<<"0"<<" ";
        }
        else
        {
          cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
  }
