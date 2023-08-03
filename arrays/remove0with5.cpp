//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int answer = 0;
    int factor = 1;
    while(n){
        int rem = n%10;
        if(rem == 0) rem = 5;
        answer = rem*factor+answer;
        n = n/10;
        factor *= 10;
    }
    return answer;
}