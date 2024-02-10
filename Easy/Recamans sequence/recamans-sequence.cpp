//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        int i=1,a=0,b;
        vector<int>v;
        v.push_back(a);
        unordered_map<int,int>m;
        while(i<n)
        {
            b=a-i;
           
            if(b<=0 || m.find(b)!=m.end())
                a=a+i;
            else
                a=a-i;
            v.push_back(a);
            m[a]++;
            i++;
        }
        return v;
    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends