//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	set < string > mp;
		void helper(int i, string s) {
		  if (i == s.size()) {
		    mp.insert(s);
		    return;
		  }

		  for (int j = i; j < s.size(); j++) {
		    swap(s[i], s[j]);
		    helper(i + 1, s);
		    swap(s[i], s[j]);
		  }
		}
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    sort(s.begin(), s.end());
		  helper(0, s);
		  vector < string > ans;
		  for (auto x: mp) {
		    ans.push_back(x);
		  }
		  sort(ans.begin(), ans.end());
		  return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends