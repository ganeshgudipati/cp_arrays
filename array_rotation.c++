#include <bits/stdc++.h>
  using namespace std;
   void reverse(int [], int , int );
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      k=k%n;
      int arr[n];
      for(int i=0; i<n; i++)
        cin>>arr[i];
      reverse(arr, 0,n-k-1);
      reverse(arr, n-k,n-1);
      reverse(arr, 0,n-1);
      for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
      cout<<endl;
    }
    return 0;
  }
  void reverse(int arr[], int start, int end)
{
		
		while(start<end)
		{
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			start++;
			end--;
	}
}
