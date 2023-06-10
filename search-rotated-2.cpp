class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int low=0;
        int n = arr.size();
        int high=n-1;

        while(low<=high) {
            int mid = low + (high-low) / 2;
            if(arr[mid]==target) return true;
            else if( (arr[mid]==arr[low]) && (arr[mid]==arr[high]) ) {
                // then what
                low++;
                high--;
            }
            // check if arr[low] <arr[mid]
            // this would mean that it is sorted
            else if(arr[low] <=arr[mid]) {
                if(arr[low] <=target && target <arr[mid]) {
                    // meaing we have it in this interval
                    high=mid-1;
                }
                else {
                    // it is not in this interval 
                    low=mid+1;
                }
            }
            else {
                if(target <=arr[high] && (arr[mid] <target) ) {
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};



