#include <bits/stdc++.h>
  using namespace std;
  void input(int m,int n,int a[][5]);
  void output(int m,int n,int a[][5]);
  void input(int m,int n,int a[][5])
  {
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>a[i][j];
      }
    }
  }
  void output(int m,int n,int a[][5])
  {
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  void sum(int m,int n,int a[][5],int b[][5])
  {
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<a[i][j]+b[i][j]<<" ";
      }
      cout<<endl;
    }
  }
void mult(int m,int n,int a[][5],int b[][5])
{
  int mul[m][5];
  for(int i=0;i<m;i++)    
  {    
    for(int j=0;j<n;j++)    
    {    
      mul[i][j]=0;    
      for(int k=0;k<n;k++)    
      {    
        mul[i][j]+=a[i][k]*b[k][j];    
      }    
    }    
  }
  output(m,n,mul);
}
  
  int main()
  {
    //write your code here
    int m,n;
    cin>>m>>n;
    int a[m][5];
    int b[m][5];
    input(m,n,a);
    input(m,n,b);
    sum(m,n,a,b);
    mult(m,n,a,b);
    return 0;
  }
