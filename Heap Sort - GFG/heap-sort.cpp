//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

// same as prev one

class Solution
{
    public:
    void heapify(int arr[], int n, int i)  
    {
       int l= 2*i+1;
       int r= 2*i+2;
       
       int largest=i;
       if(l<n && arr[l] > arr[largest]){
           largest=l;
       }
       if(r<n && arr[r] > arr[largest]){
           largest=r;
       }
       
       if(largest!=i){
           swap(arr[largest],arr[i]);
           heapify(arr,n,largest);
       }
       
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2; i>=0; i--){
            heapify(arr,n,i);
        }
    }

    public:
    void heapSort(int arr[], int n)
    {
        // To build max heap
        buildHeap(arr,n);
        
        // To sort it in increasing order
        for(int i=n-1; i>0; i--){
            swap(arr[0], arr[i]);
            
    //here decreasing the val of n as 
    //we are putting the max(arr[0]) val at the last position and excluding it from this process
           
            heapify(arr, i, 0);
        }
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends