#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int left[M],right[M];
    for(int i=0;i<M;i++) 
    {
        cin>>left[i]>>right[i];
    }
    int count=0;
    int freq[N+1]={0};
    for(int i=0;i<M;i++)
    {
        if(left[i]==left[0]||right[i]==left[0])
        {
            count++;
        }
        else
        {
            freq[left[i]]++;
            freq[right[i]]++;
        }
    }
    for(int i=1;i<=N;i++)
    {
        if(freq[i]==M-count)
        {
            cout<<"YES";
            return 0;
        }
    }
    count=0;
    for(int i=0;i<=N;i++) freq[i]=0;
    for(int i=0;i<M;i++){
        if(left[i]==right[0]||right[i]==right[0])
        {
            count++;
        }
        else
        {
            freq[left[i]]++;
            freq[right[i]]++;
        }
    }
    for(int i=1;i<=N;i++)
    {
        if(freq[i]==M-count)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
