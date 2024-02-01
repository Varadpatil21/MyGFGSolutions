//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int maxi=INT_MIN;
        int max_index=0;
         vector<int> v;
         int j;
         for(j=0;j<k;j++)
         {
             if(arr[j]>maxi)
             {
                  maxi=arr[j];
                  max_index=j;
             }
         }
         v.push_back(maxi);
        
       for(int j=k;j<n;j++)
       {
           if(max_index>=j-k+1)
           {
               if(arr[j]>=maxi)
               {
                   maxi=arr[j];
                   max_index=j;
               }
           }
           else
           {
               maxi=arr[j];
               max_index=j;
               for(int i=j-k+1;i<j+1;i++)
               {
                   if(arr[i]>maxi)
                {
                   maxi=arr[i];
                   max_index=i;
                }
               }
           }
            v.push_back(maxi);
       }
       return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends