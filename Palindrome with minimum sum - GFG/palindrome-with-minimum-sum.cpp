//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int ans=0, n=s.size();
        int i=0, j=n-1;
        char prev=s[0];
        
        while(i<j){
            if(s[i]!=s[j] && s[i]!='?' && s[j]!='?'){
                return -1;
            }
            
            if(s[i]!='?' || s[j]!='?'){
                char curr = (s[i]=='?') ? s[j] : s[i];
                if(prev!='?'){
                    ans += abs(prev-curr);
                }
                prev = curr;
            }
            i++, j--;
        }
        
        return 2*ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends