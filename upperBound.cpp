int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int low=0;
	int high=n-1;
	int result =n;
	while(low<=high) {
		int mid = (low+high)/2;
		if(arr[mid]<=x) {
			
			low= mid+1;

		}
		else { 
			result = mid;
			high=mid-1;
		}
	}
	return result;
}
