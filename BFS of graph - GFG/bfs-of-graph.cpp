//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     vector<int>bfsOfGraph(int V, vector<int> adj[]) {
	   vector<bool>vis(V,false);
	   queue<int>q;
	   vector<int>v;
	   q.push(0);
	   vis[0]=true;
	   
	  while(!q.empty()){
	      auto i= q.front();
	      v.push_back(i);
	      q.pop();
	      for(auto x: adj[i]){
	      if(!vis[x]){
	          vis[x]=true;
	          q.push(x);
	      }}
	  }
	    return v;
	}
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends