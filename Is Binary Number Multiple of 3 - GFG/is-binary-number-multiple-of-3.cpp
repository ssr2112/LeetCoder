//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int isDivisible(string s){
	    int n = s.size();
	    int ans = 0, mul = 1;
	    for(int i=n-1; i>=0; i--){
	        ans = (ans + mul*(s[i]-'0'))%3;
	        mul = (mul*2)%3;
	    }
	    
	    return (ans%3==0);
	}
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends