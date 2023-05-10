//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        int ans = 0, maxi=0;
        vector<int>mini(N);
        mini[N-1] = A[N-1];
        
        for(int i=N-2; i>=0; i--){
            mini[i] = min(mini[i+1], A[i]);
        }
        
        for(int i=0; i<N-1; i++){
            maxi = max(maxi, A[i]);
            int sum = maxi + mini[i+1];
            if(sum>=K) ans++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends