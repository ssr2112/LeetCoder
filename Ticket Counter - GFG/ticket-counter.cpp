//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    int findSol(int start, int end, int K, bool isStart){
        int size = end-start+1;
        if(size <= K){
            if(isStart) return end;
            else return start;
        }
        
        if(isStart) findSol(start+K, end, K, false);
        else findSol(start, end-K, K, true);
    }
  public:
    int distributeTicket(int N, int K) {
        return findSol(1, N, K, true);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends