//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void swap(int &x , int &y){
        int temp=x;
        x=y;
        y=temp;
    }
    void sort012(int a[], int n)
    {
        // code here 
        //sort(a,a+n);
        int l = 0 , h=n-1, m = 0;
        while(m<=h){
            if(a[m]==0){
                swap(a[m],a[l]);
                l++;
                m++;
            }else if(a[m]==1){
                m++;
            }else{
                swap(a[m],a[h]);
                h--;
            }            
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends