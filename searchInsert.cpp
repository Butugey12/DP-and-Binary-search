int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	int result=n;
	int low=0;
	int high=n-1;
	while(low<=high) {
		int mid =(low+high)/2;
		if(arr[mid]==m) return mid;
		else if(arr[mid]<m) {
			low=mid+1;
		}
		else{
			result=mid;
			high=mid-1;
		}

	}
	return result;
}
