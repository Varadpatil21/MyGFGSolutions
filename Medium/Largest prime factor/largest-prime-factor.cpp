//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int m=0;
        int i;
        while(N%2==0)
        {
            N/=2;
            m=max(m,2);
        }
        for(i=3;i<=sqrt(N);i=i+2)
        {
            while(N%i==0)
            {
                N/=i;
                m=max(m,i);
            }
        }
        if(N>2)
        {
            m=max(m,N);
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends