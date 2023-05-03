//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
private:
    string reverse(string s){
        string ans="";
        for(auto x:s) ans = x + ans;
        return ans;
    }
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string, int>mp;
        for(auto& x:arr){
            if(mp.find(x) == mp.end()){
                mp[reverse(x)]++;
            }
            else mp.erase(x);
        }
        
        if(mp.size()==0) return true;
        if(mp.size()==1){
            for(auto x:mp){
                if(reverse(x.first) == x.first) return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends