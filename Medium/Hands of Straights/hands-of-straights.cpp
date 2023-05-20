//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
         map<int,int>mp;
        for(auto x:hand)mp[x]++;
        int prev = -1;
        while(!mp.empty())
        {
            int count = 0;
            prev = -1;
            for(auto &x:mp)
            {
                if(prev==-1)
                {
                    prev = x.first;
                    count++;
                    x.second--;
                    if(x.second==0)mp.erase(x.first);
                }
                else
                {
                    if(prev==x.first-1)
                    {
                        prev = x.first;
                        count++;
                        x.second--;
                        if(x.second==0)mp.erase(x.first);
                    }
                    else
                    {
                        return false;
                    }
                }
                if(count==groupSize)break;
            }
            if(count<groupSize)return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends