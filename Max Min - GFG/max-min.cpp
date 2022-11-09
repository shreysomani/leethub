//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int n)
    {
    	//code here.
    	int max = -1000000001;
    	int min = 1000000001;
    	
    	for(int i=0; i<n ; i++){
    	    if(A[i]>max){
    	        max = A[i];
    	    }
    	}
    	
    	for(int i = 0; i<n ; i++){
    	    if(A[i]<min){
    	        min = A[i];
    	    }
    	}
    	
    	int ans = max + min;
    	return ans;
    	
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends