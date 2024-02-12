//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        int m=1000000007;
        int p=1;
        long long sum=0,product=1;
        for(int i=0;i<n;i++)
        {
             p=p+i;
            for(int j=p;j<=p+i;j++)
            {
                product=(product*j)%m;
            }
            sum=(sum+product)%m;
           
            product=1;
           
        }
        return (sum%m);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends