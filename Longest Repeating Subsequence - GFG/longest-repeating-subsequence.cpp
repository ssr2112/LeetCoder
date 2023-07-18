//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int LongestRepeatingSubsequence(string str){
	    string a= str, b= str;
	    int n= str.size();
	    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
		    
	    for(int i=1; i<=n;i++){
	        for(int j=1; j<=n; j++){
	            if(a[i-1]==b[j-1] && j!=i)
	                 dp[i][j]= dp[i-1][j-1]+1;
	          else 
	           dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
		    
	   return dp[n][n]; 
	}
};

//IF we have to print it
// string res = "";
 
//     int i = n, j = n;
//     while (i > 0 && j > 0){
//         if (dp[i][j] == dp[i-1][j-1] + 1){
//           res = res + str[i-1];
//           i--;
//           j--;
//         }
 
//         else if (dp[i][j] == dp[i-1][j])  i--;
//         else j--;
//     }
//     reverse(res.begin(), res.end());
//     return res;


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends