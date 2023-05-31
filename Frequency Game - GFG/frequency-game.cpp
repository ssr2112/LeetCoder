//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
     unordered_map<int,int>m;
     for(int i=0; i<n; i++) m[arr[i]]++;
     
     vector<pair<int,int>>ans;
     for(auto x:m) ans.push_back({x.second,x.first});
     
     int lf=ans[0].first, res=ans[0].second;
     for(int i=1; i<ans.size(); i++){
         if(ans[i].first<lf){
            lf = ans[i].first;
            res = ans[i].second;   
         }
         if(ans[i].first==lf && ans[i].second>res) res=ans[i].second;
     }
     
     return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends