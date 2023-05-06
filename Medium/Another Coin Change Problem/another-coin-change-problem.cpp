//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool dp[1001][101];
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
         sort(coins.begin(), coins.end());
        memset(dp, true, sizeof(dp));
        func(N-1, K, target, coins);
    }
    bool func(int cur, int k, int x, vector<int> &arr) {
        if(k == 0 && x == 0) return true;
        if(cur < 0) return false;
        if(!dp[x][k]) return dp[x][k];
        
        for(int i = 0; i <= k && arr[cur]*i <= x; i++){
            if(func(cur-1, k-i, x-arr[cur]*i, arr)) return true;
        }
        return dp[x][k] = false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends