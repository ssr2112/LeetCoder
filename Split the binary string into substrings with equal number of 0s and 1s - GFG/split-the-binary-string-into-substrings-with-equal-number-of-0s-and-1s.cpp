//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int maxSubStrs = 0;
        int n = str.size();
        int sum = 0;
        
        for(int i=0; i<n; i++) {
            if(str[i] == '0') {
                sum += -1;
            }
            else {
                sum += 1;
            }
            
            if(sum == 0) {
                maxSubStrs++;
            }
        }
        
        if(sum != 0) return -1;
        return maxSubStrs;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends