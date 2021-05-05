#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int n;
    cin>>n;
    int arrA[n];
    for(int i=0;i<n;i++)
    {
      cin>>arrA[i];
    }
    int Lmin[n],Rmax[n];
		int leftMinIndex = 0;
		int leftMinValue = arrA[0];
		int rightMaxValue = arrA[n - 1];
		int rightMaxIndex = n-1;
		
		for (int i = 0; i < n; i++) {
			if (leftMinValue > arrA[i]) {
				leftMinIndex = i;
				leftMinValue = arrA[i];
			}
			Lmin[i] = leftMinValue;
		}
		for (int i =n - 1; i >= 0; i--) {
			if (rightMaxValue < arrA[i]) {
				rightMaxIndex = i;
				rightMaxValue = arrA[i];
			}
			Rmax[i] = rightMaxValue;
		}
		int distance_so_far = -1;
		int i = 0, j = 0;
		while (i < n && j < n) {
			if (Lmin[i] < Rmax[j]) {
				if ((j - i > distance_so_far))
					distance_so_far = j - i;
				j++;
			} else
				i++;
		}
		cout<<distance_so_far;
     
  }
