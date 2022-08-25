#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];
    }
};

 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int *a = new int[n];
        
        for(int i=0; i<n; i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, n-1, k)<<endl;
        delete []a;
    }
    return 0;
}