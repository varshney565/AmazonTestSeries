//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int a[],int n){
    int val = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        val += i*a[i];
        sum += a[i];
    }
    int ans = val;
    for(int i = 0 ; i < n ;  i++){
        val = val-sum+n*a[i];
        ans = max(ans,val);
    }
    return ans;
}