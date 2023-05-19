//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        vector<int> ans;
        int countEle=0;
        sort(range.begin(), range.end());
        int pre=0;
        for(int i=0;i<q;i++){
            for(int j=0; j<n; j++){
                int currEle=range[j][1]-range[j][0]+1;
                if(pre>=range[j][0])
                    countEle=currEle+countEle-(pre-range[j][0]+1);
                else
                    countEle=currEle+countEle;
                pre=range[j][1];
                if(countEle>=queries[i]){
                    ans.push_back(range[j][1]-(countEle-queries[i]));
                    break;
                }
            }
            if(countEle<queries[i]){
                ans.push_back(-1);
            }
            
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends