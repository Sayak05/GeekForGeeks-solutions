//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string s=to_string(n);
		    int x=s.size();
		    int i=0;
		    int j=x-1;
		    if(s[i]==s[j]){
		        cout<<"Yes";
		        i++;
		        j--;
		    }
		    else{
		        cout<<"No";
		    }  
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends