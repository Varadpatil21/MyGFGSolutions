//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        int flag=0;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                s.push(x[i]);
                flag=1;
            }
            else
            {
                if(!s.empty())
                {
                    if((x[i]==')' && s.top()=='(') || (x[i]=='}' && s.top()=='{') ||  (x[i]==']' && s.top()=='['))
                    {
                        s.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(s.empty() && flag==1)
            return true;
        else
            return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends