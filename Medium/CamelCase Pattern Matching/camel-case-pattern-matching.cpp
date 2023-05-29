//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string>dict(N);
        for(int j=0;j<N;j++){
            int n=Dictionary[j].size();
            for(int i=0;i<n;i++){
                if(Dictionary[j][i]>='A' && Dictionary[j][i]<='Z'){
                    dict[j]+=Dictionary[j][i];
                }
            }
        }
        vector<string>ans;
        for(int i=0;i<N;i++){
            int c=0;
            string s=dict[i];
            if(Pattern.length()>s.length()){
                continue;
            }
            for(int j=0;j<Pattern.length();j++){
                if(Pattern[j]==dict[i][j]){
                    c++;
                }
            }
            if(c==Pattern.length()) ans.push_back(Dictionary[i]);
        }
        if(ans.size()>0) return ans;
        vector<string>a(1,"-1");
        return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends