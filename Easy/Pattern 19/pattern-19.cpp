//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int sp =0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<sp;j++){
                cout<<" ";
            }
            sp+=2;
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        int sp2=2*n-2;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<sp2;j++){
                cout<<" ";
            }
            sp2-=2;
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends