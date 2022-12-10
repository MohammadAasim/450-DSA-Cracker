#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool TripletSum(int n,int arr[],int sum){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==sum){
                    cout << "Triplet is " << arr[i] <<", " << arr[j] << ", " << arr[k];
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int arr[]={1 ,4 ,45, 6, 10, 8};
    int n = sizeof(arr)/sizeof(int);
    int sum = 13;
    TripletSum(n,arr,sum);
    return 0;
}