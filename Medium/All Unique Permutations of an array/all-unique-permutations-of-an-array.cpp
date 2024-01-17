//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        set<vector<int>> se;
        permutation(arr,se,0,n);
        for(auto i:se)
            ans.push_back(i);
        return ans;
    }
    
    void permutation(vector<int> &arr,set<vector<int>> &se,int l,int n)
    {
        if(l==n)
        {
            se.insert(arr);
            return;
        }
        for(int i=l;i<n;i++)
        {
            swap(arr[l],arr[i]);
            permutation(arr,se,l+1,n);
            swap(arr[l],arr[i]);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends