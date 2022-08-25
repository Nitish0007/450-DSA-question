#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int maxi = INT_MIN;
    	int mini = INT_MAX;
    	for(int i = 0; i < N; ++i){
    	    if(A[i] > maxi){
    	        maxi = A[i];
    	    }
    	    if(A[i] < mini){
    	        mini = A[i];
    	    }
    	}
    	return maxi+mini;
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *arr = new int[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
        delete []arr;
	}
	return 0;
}
