//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  private:
    int findCost(int price[], int n, vector<int>&dp){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        
        int res = 0;
        for(int i=1; i<=n; i++){
            res = max(res, findCost(price, n-i, dp) + price[i-1]);
        }
        
        return dp[n] = res;
    }
  public:
    int cutRod(int price[], int n) {
        vector<int>dp(n+1, -1);
        return findCost(price, n, dp);
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
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends