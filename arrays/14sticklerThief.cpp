//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n){
       vector<int> dp(n+1,-1);
       function<int(int)> go = [&](int n){
           if(n == 0) return 0;
           if(n == 1) return arr[0];
           if(dp[n] != -1) return dp[n];
           //looting
           int val1 = arr[n-1]+go(n-2);
           //not looting
           int val2 = go(n-1);
           return dp[n] = max(val1,val2);
       };
       return go(n);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends