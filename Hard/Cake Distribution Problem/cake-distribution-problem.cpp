//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    bool isValid(vector<int> &sweetness, int n, int k, int mid) {
        int count = 0, sumSweet =0;
        for(auto sweet : sweetness) {
            sumSweet += sweet;
            if(sumSweet >= mid) {
                sumSweet = 0;
                count++;
            }
        }
        return count >= k + 1;
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
        int L = 0;
        int R = 1e7;
        int ans = -1;
        while(L <= R) {
            int mid = L + (R - L) / 2;
            if(isValid(sweetness,N,K,mid)) {
                ans = max(ans , mid);
                L = mid + 1;
            } else {
                R = mid - 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends