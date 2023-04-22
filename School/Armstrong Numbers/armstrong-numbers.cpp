//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int arm=n;
        int sum=0;
        while(arm!=0){
            int rem=arm%10;
            sum+=pow(rem,3);
            arm/=10;
        }
        if(sum==n){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends