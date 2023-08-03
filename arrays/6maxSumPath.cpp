//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
    int max_path_sum(int A[], int B[], int n, int m){
         int ans = 0;
         int i = 0;
         int j = 0;
         int v1 = 0,v2 = 0;
         while(i < n && j < m){
            if(A[i] < B[j]){
                v1 += A[i];
                i++;
            }else if(A[i] > B[j]){
                v2 += B[j];
                j++;
            }else{
                ans += max(v1,v2);
                ans += A[i];
                v1 = 0;
                v2 = 0;
                i++;
                j++;
            }
         }
         
         while(i < n){
             v1 += A[i];
             i++;
         }
         
         while(j < m){
             v2 += B[j];
             j++;
         }
         
         return ans+max(v1,v2);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends