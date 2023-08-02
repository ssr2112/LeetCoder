//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
         queue<pair<int,pair<int,int>>>q;
         if(A[0][0]==0) return -1;
         q.push({0,{0,0}});
         
         while(!q.empty()){
             int steps=q.front().first;
             int x=q.front().second.first;
             int y=q.front().second.second;
             q.pop();
             
             if(x==X && y==Y)return steps;
             if(x+1<N && A[x+1][y]==1) q.push({steps+1,{x+1,y}}), A[x+1][y]=0;
             if(y+1<M && A[x][y+1]==1) q.push({steps+1,{x,y+1}}), A[x][y+1]=0;
             if(y-1>=0 && A[x][y-1]==1) q.push({steps+1,{x,y-1}}), A[x][y-1]=0;
             if(x-1>=0 && A[x-1][y]==1) q.push({steps+1,{x-1,y}}), A[x-1][y]=0;
             
         }
         return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends