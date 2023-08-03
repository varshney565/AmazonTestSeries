//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int a = -1,b = -1;
        int ans = n;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == x){
                a = i;
                if(b >= 0)
                    ans = min(ans,abs(b-a));
            }else if(arr[i] == y){
                b = i;
                if(a >= 0)
                    ans = min(ans,abs(b-a));
            }
        }
        return ((ans == n) ? -1 : ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends