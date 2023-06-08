pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	sort(arr , arr+n);
	// ceiling 
	int low =0;
	int high=n-1;
	int floor=-1;
	while(low<=high) {
		int mid =(low+high)/2;
		if(arr[mid]>x) {
			high=mid-1;
		}
		else {
			floor=arr[mid];
			low=mid+1;
		}
	}
	low =0;
	high=n-1;
	int ceil=-1;
	while(low<=high) {
		int mid = (low+high)/2;
		if(arr[mid]<x) {
			low=mid+1;
		}
		else {
			ceil = arr[mid];
			high= mid-1;
		}
	}
	pair<int, int> result;
	result.first = floor;
	result.second=ceil;
	return result;
	
}
