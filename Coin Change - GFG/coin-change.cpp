//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    // same as prev one
    
  public:
    long long int count(int s[], int m, int n) {
        long long int dp[m+1][n+1];
          
        for(int i=0; i<=m; i++) dp[i][0]=1;
        for(int i=1; i<=n; i++) dp[0][i]=0;
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s[i-1]<=j)
                    dp[i][j] = dp[i][j-s[i-1]]+ dp[i-1][j];
                
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[m][n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends