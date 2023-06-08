int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	
	int low =0;
	int high= n-1;
	
	int result =n;
	while(low<=high) {
		// if you find x then return it
		// if you don't find x then return the index 
		// of the smallest number bigger than x
		int mid = (low+high)/2;
		if(arr[mid] <x) {
			low = mid+1;
		}
		else {
			result = mid;
			// eleminate the right side of this 
			high= mid-1;
		}
	}
	return result;

}
