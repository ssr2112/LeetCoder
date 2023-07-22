//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
   //Function to find out minimum steps Knight needs to reach target position.
   int vis[1001][1001];
   bool isValid(int x, int y, int n)
   {
      if (x < 1 || x > n || y < 1 || y > n)
         return false;

      if (vis[x][y] == 1)
         return false;

      return true;
   }

public:
   int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N) {
      int srcX = KnightPos[0], srcY = KnightPos[1];
      int tX = TargetPos[0], tY = TargetPos[1];

      int dis[8][2] = {{ -2, 1}, { -2, -1}, {2, -1}, {2, 1}, { -1, 2}, { -1, -2}, {1, 2}, {1, -2}};
      int cnt = 0;
      memset(vis, 0, sizeof(vis));

      queue<pair<int, int>> q;
      q.push({srcX, srcY});
      vis[srcX][srcY] = 1;

      if (srcX == tX && srcY == tY)
         return cnt;

      while (!q.empty()) {
         int sz = q.size();
         cnt++;
         
         while(sz--) {
             int currX = q.front().first;
             int currY = q.front().second;
             q.pop();
             
             for (int i = 0; i < 8; i++) {
                int newX = currX + dis[i][0];
                int newY = currY + dis[i][1];
                 
                if (isValid(newX, newY, N))
                {
                   if (newX == tX && newY == tY)
                      return cnt;
                    
                   vis[newX][newY] = 1;
                   q.push({newX, newY});
    
                }
             }
         }  
      }
      
      return -1;
   }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends