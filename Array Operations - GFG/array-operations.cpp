//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int ans=0, curr=0;
        bool zero=false;
        
        for(int i=0; i<n; i++){
            if(arr[i]==0) zero=true, curr=0;
            if(arr[i]!=0 && curr==0) curr=1, ans++;
        }
        
        // if(!zero) return -1;  -> chutiya gfg
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends