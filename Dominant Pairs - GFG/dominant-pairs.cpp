//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
private:
    int findSol(int ele, vector<int>&arr, int n){
        int low=n/2, high=n-1;
        int ans = -1+n/2;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(ele >= 5*arr[mid]){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        
        return ans+1-n/2;
    }
public:
    int dominantPairs(int n,vector<int> &arr){
        sort(arr.begin(), arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        
        int ans = 0;
        for(int i=0; i<n/2; i++){
            int ele = arr[i];
            ans += findSol(ele, arr, n);
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends