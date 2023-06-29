//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
private:
    bool solve(int n){
        if(n==1 || n==7) return true;
        else if(n>=2 && n<=9) return false;
        
        int sq_sum = 0;
        while(n){
            int digit = n%10;
            sq_sum += digit*digit;
            n/=10;
        }
        return solve(sq_sum);
    }
public:
    int nextHappy(int N){
        while(1){
            N++;
            if(solve(N)) return N;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends