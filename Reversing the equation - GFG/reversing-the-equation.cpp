//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    string reverseEqn (string s)
    {
            string ans = "";
            for(int i=s.size()-1; i>=0; i--){
                string num = "";
                
                while(s[i]>=0+'0' && s[i]<=9+'0'){
                    num = s[i--] + num;
                }
                ans += num;
                if(i>=0) ans += s[i];
            }
            
            return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends