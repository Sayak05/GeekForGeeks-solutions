//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        //here we can use the priority queue to solve this question 
        priority_queue<int , vector<int>>maxheap;
        int i;
        long long ans = 0;
        for(i=0; i<N; i++){
            maxheap.push(A[i]);
        }
        for(i=0; i<K; i++){
            int top = maxheap.top();
            maxheap.pop();
            maxheap.push(top/2);
            ans += top;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends