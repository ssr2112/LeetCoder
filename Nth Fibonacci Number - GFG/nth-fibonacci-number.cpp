//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        int dp[n+5];
        int m= 1000000007;
        int prevOfPrev = 1, prev = 1;
        int curr = 1;
         
        for(int i=2; i<n; i++) {
            curr = (prev%m + prevOfPrev%m)%m;
            prevOfPrev = prev;
            prev = curr;
        }
         
        return curr;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends