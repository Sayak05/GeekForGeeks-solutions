//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        int count=0;
        int visited=0;
        for(int i=0;i<N;i++){
            if(S[i]=='1'){
                visited=1;
                if(i==N-1)
                    count=0;
                else
                    count=X;
            }
            else if(visited==1 && S[i]=='0'){
                count--;
                if(count==0)
                    visited=0;
                else if(i==N-1 && count>0)
                    count=0;
            }
            else if(visited==0 && S[i]=='0')
            {
                count++;
                if(count>X)
                    return 0;
            }
        }
        if(count!=0)
            return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends