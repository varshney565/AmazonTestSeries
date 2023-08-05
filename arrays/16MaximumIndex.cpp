//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int maxIndexDiff(int arr[], int n) { 
        vector<int> pre(n),suf(n);
        for(int i = 0 ; i < n ; i++){
            pre[i] = arr[i];
            if(i) pre[i] = min(pre[i],pre[i-1]);
        }
        
        for(int i = n - 1 ; i >= 0 ; i--){
            suf[i] = arr[i];
            if(i < n - 1)
                suf[i] = max(suf[i],suf[i+1]);
        }
        int i = 0,j = 0;
        int ans = 0;
        while(i < n && j < n){
            if(suf[j] >= pre[i]){
                ans = max(ans,j-i);
                j++;
            }else{
                i++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends