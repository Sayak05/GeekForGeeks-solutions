//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        for (int i = N1 - 2; i >= 0; i--){
            S1[i] += S1[i + 1];
        }
        for (int i = N2 - 2; i >= 0; i--){
            S2[i] += S2[i + 1];
        }
        for (int i = N3 - 2; i >= 0; i--){
            S3[i] += S3[i + 1];
        }
        int i1 = N1 - 1, i2 = N2 - 1, i3 = N3 - 1;
        int mx = max({S1[i1], S2[i2], S3[i3]}), ans = 0;
        while (i1 >= 0 && i2 >= 0 && i3 >= 0){
            while (i1 >= 0 && S1[i1] < mx){
                i1--;
            }
            while (i2 >= 0 && S2[i2] < mx){
                i2--;
            }
            while (i3 >= 0 && S3[i3] < mx){
                i3--;
            }
            if (i1 >= 0 && i2 >= 0 && i3 >= 0 && (S1[i1] == S2[i2]) && (S2[i2]== S3[i3])){
                ans = S1[i1];
                i1--, i2--, i3--;
            }
            if (i1 >= 0){
                mx = max(mx, S1[i1]);
            }
            if (i2 >= 0){
                mx = max(mx, S2[i2]);
            }
            if (i3 >= 0){
                mx = max(mx,S3[i3]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends