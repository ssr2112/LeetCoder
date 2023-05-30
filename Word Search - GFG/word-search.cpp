//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    bool isPossible(int i, int j, int k, vector<vector<char>>&board, string word){
        int n = board.size(), m = board[0].size();
        if(k == word.size()) return true;
        if(min(i,j)<0 || i>=n || j>=m || board[i][j]=='*' || board[i][j] != word[k]) return false;
        
        
        char prev = board[i][j];
        board[i][j] = '*';
        bool ans = isPossible(i+1, j, k+1, board, word) 
                || isPossible(i-1, j, k+1, board, word) 
                || isPossible(i, j+1, k+1, board, word)
                || isPossible(i, j-1, k+1, board, word);
        
        board[i][j] = prev;
        return ans;
    }
    
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        bool ans = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == word[0]){
                    if(isPossible(i, j, 0, board, word)) return true;
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends