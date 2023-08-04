//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> ans(n,0);
        int cnt0 = 0;
        int ind = -1;
        long long pro = 1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                cnt0++;
                ind = i;
            }else{
                pro *= nums[i];
            }
        }
        if(cnt0 == 1){
            ans[ind] = pro;
            return ans;
        }else if(cnt0 >= 2){
            return ans;
        }else{
            for(int i = 0 ; i < n ; i++){
                ans[i] = pro/nums[i];
            }
            return ans;
        }
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends