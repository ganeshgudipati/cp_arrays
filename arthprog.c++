#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int n;
    cin>>n;
    int a[n],li[100001],diff[100001],b[n],c[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<100001;i++)
    {
      li[i]=-1;
      diff[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
      if(li[a[i]]==-1)
      {
        li[a[i]]=i;
        diff[a[i]]=0;
      }
      else if(li[a[i]]!=-1 && diff[a[i]]==0)
      {
        diff[a[i]]=i-li[a[i]];
        li[a[i]]=i;
      }
      else if(i-li[a[i]]==diff[a[i]])
      {
        li[a[i]]=i;
      }
      else
      {
        li[a[i]]=-2;
        diff[a[i]]=-1;
      }
    }
    int count=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
      if(a[i]!=a[i-1])
      {
        if(li[a[i]]!=-2)
        {
          b[count]=a[i];
          c[count]=diff[a[i]];
          count++;
        }
      }
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++)
    {
      cout<<b[i]<<" "<<c[i]<<endl;
    }
    return 0;
  }
