//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    bool sameFreq(string s) {
       unordered_map<char,int>mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

     
        for(char ch='a';ch<='z';ch++)
        {
               unordered_set<int>st;
            mp[ch]--;
            for (auto i:mp) {
           if(i.second>0) st.insert(i.second);
           if(st.size()>1)
            break;
           
               
        }
        if(st.size()==1)
            return true;
        mp[ch]++;
        }
        

       return false;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends