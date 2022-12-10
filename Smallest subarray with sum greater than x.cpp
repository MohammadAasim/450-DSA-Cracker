//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here
        int curr_sum=0,min_len=n+1;
        int s=0,e=0;
        while(e<n){
            while(curr_sum<=x && e<n){
                curr_sum += arr[e++];
            }
            while(curr_sum>x && s<n){
                if(e-s < min_len){
                    min_len=e-s;
                }
                curr_sum -= arr[s++];
            }
        }
        return min_len;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends