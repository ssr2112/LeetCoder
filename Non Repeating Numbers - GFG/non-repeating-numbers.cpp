//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        
        int x=0,y=0,z=0,c=0;
    for(auto it: nums){
        x= x^it;
    }

    int n= log2(x&-x);
      
      for(auto it: nums){
          if(it&1<<n) y= y^it;
          else z= z^it;
      }
      vector<int>v;
      
      v.push_back(min(y,z));
      v.push_back(max(y,z));
      
      return v;
      
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends