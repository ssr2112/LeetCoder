//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        int n=str.size();
        string res = "";
        res += str[0];
        
        if(n>1 && str[1]!=str[0]){
            for(int i=1; i<str.size(); i++){
                if(str[i]<=res[res.size()-1]) res += str[i];
                else break;
            }
        }
        
        string ans = res;
        reverse(res.begin(), res.end());
        ans = ans + res;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends