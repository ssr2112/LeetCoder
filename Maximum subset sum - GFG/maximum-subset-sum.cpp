//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  private:
    long long solve(int i, vector<int> &A, bool taken, vector<vector<long long>>&dp){
        if(i<0) return 0;
        if(dp[i][taken]!=-1) return dp[i][taken];
        
        long long first=-1*1e11, second=-1*1e11;
        first = solve(i-1, A, true, dp) + A[i];
        if(taken) second = solve(i-1, A, false, dp);
        
        return dp[i][taken] = max(first, second);
    }

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        vector<vector<long long>>dp(N, vector<long long>(2,-1));
        return solve(N-1, A, true, dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends