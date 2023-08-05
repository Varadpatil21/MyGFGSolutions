//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	     int p=0;
	    for(int i=n*2;i>0;i=i-2)
	    {
	       
	        for(int j=0;j<p;j++)
	        {
	            cout<<' ';
	        }
	        for(int k=1;k<i;k++)
	        {
	            cout<<'*';
	        }
	        cout<<endl;
	        p++;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends