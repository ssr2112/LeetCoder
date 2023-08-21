//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
private:
    bool surroundedByOnes(int i, int j, vector<vector<int> >& matrix) {
        int onesCnt = 0;
        int n = matrix.size(), m = matrix[0].size();
        
        int dx[] = {-1, -1, -1, 1, 1, 1, 0, 0};
        int dy[] = {0, -1, 1, 0, -1, 1, -1, 1};
        for(int k=0; k<8; k++) {
            int new_i = i+dx[k];
            int new_j = j+dy[k];
            if(new_i>=0 && new_i<n && new_j>=0 && new_j<m && 
                matrix[new_i][new_j] == 0) onesCnt++;
        }
        
        return (onesCnt>0 && onesCnt%2==0);
    }
public:
    int Count(vector<vector<int> >& matrix) {
        int ans = 0;
        int n = matrix.size(), m = matrix[0].size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] ==1 &&
                    surroundedByOnes(i, j, matrix)) ans ++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends