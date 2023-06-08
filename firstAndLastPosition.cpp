#include <bits/stdc++.h> 
int lowerBound(vector<int>& arr , int n , int k) {
    int low =0;
    int high=n-1;
    int lowerBound =n;
    while(low<=high) {
        int mid =(low+high)/2;
        if(arr[mid]>= k) {
            
            lowerBound=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return lowerBound;
    
}
int upperBound(vector<int>& arr , int n , int k) {
    int low =0;
    int high=n-1;
    int upperBound =n;
    while(low<=high) {
        int mid =(low+high)/2;
        if(arr[mid]> k) {
            upperBound=mid;
            high=mid-1;
        }
        else {
            low=mid+1;

        }
    }
    return upperBound;
    
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb = lowerBound(arr , n , k);
    if(lb==n || arr[lb]!=k){
        return {-1,-1};
    }
    int ub = upperBound(arr,  n,  k)-1;
    return {lb , ub};
    
}
