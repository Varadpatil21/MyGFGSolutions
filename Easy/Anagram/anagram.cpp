//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int a1[26]={0};
        int b1[26]={0};
        for(int i=0;i<a.size();i++)
        {
            a1[a[i]-97]++;
        }
        for(int i=0;i<b.size();i++)
        {
            b1[b[i]-97]++;
        }
        int i=0,j=0;
        while(i<26 && j<26)
        {
            if(a1[i]!=b1[j])
                return false;
            i++,j++;
        }
        return true;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends