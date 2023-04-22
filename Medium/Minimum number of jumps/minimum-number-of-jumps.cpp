//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump = 0;
        int peak = 0;
        int newpeak = 0;
        for(int i=0; i<n; i++){
            if (arr[i]+i > newpeak) newpeak = arr[i]+i; // See that at the position i can perform the longest jump
            if (newpeak >= n-1){ //if perform a jump can reach the end, perform the last jump then return
                jump++;
                return jump;
            }
            if (i == peak) { // if i reach the peak then perform a jump using new peak.
                if (peak == newpeak) return -1; // if peak == newpeak then nowhere to jump to
                else{
                    jump++;
                    peak = newpeak;
                }
            }
            
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends