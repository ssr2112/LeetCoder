//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    // x -> old element at that place and y new element
    // Make array as -> x + y*A (A>y)
    public:
    void arrange(long long arr[], int n) {
        int A = 1e6;
        for(int i=0; i<n; i++){
            int ele = arr[i]%A;
            arr[i] = (arr[i] + (arr[ele]%A)*A);
        }
        
        for(int i=0; i<n; i++){
            arr[i] = arr[i]/A;
        }
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends