int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low=0;
    int high=n-1;
    while(low<=high) {
        int mid =(low+high)/2;
        if(arr[mid]==k) return mid;
        if( arr[low] <= arr[mid]  ) {
            // sorted
            if(arr[low]<=k && k<=arr[mid] ) {
                // it is here
                high=mid-1;
            }
            else{
                // it is not in the sorted portion 
                low = mid+1;
            }
        }
        else {
            if(arr[mid] <= k && k<=arr[high]  ) {
                // it is in this portion
                low=mid+1;
            }
            else {
                // it is not in this porion
                high=mid-1;
            }
        }
    }
    return -1;
}
