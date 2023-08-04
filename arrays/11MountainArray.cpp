//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,int q) {
        //do some precomputation
        vector<int> pre(n,0);
        vector<int> suf(n,n-1);
        for(int i = 1 ; i < n ; i++){
            if(a[i-1] < a[i])
                pre[i] = i;
            else
                pre[i] = pre[i-1];
        }
        for(int i = n - 2 ; i >= 0 ; i--){
            if(a[i+1] < a[i]){
                suf[i] = i;
            }else{
                suf[i] = suf[i+1];
            }
        }
        
        vector<bool> answers;
        //now time for queries;
        for(int i = 0 ; i < q ; i++){
            int l = queries[i].first;
            int r = queries[i].second;
            //do some computation
            if(pre[r] <= suf[l]){
                answers.push_back(true);
            }else{
                answers.push_back(false);
            }
        }
        return answers;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, i, q;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        Solution obj;
        auto v = obj.processQueries(a, n, queries, q);
        for (bool u : v) {
            cout << (u ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
// } Driver Code Ends