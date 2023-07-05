int countOfStudents(vector<int> &arr, int pages, int n) {
  int student = 1;
  int pagesCount = 0;
  for (int i = 0; i < n; i++) {
    if (pagesCount + arr[i] <= pages) {
      pagesCount += arr[i];
    } else {
      student++;
      pagesCount = 0;
      pagesCount = arr[i];
    }
  }
  return student;
}
pair<int, int> maxAndSum(vector<int> &arr, int n) {
  int sum = 0;
  int maxElement = INT_MIN;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    maxElement = max(maxElement, arr[i]);
  }
  return {maxElement, sum};
}

int findPages(vector<int> &arr, int n, int m) {
  // Write your code here.
  if (m > n)
    return -1;
  // possible answers are the [maxElement , sumOfAllElements]
  int low = maxAndSum(arr, n).first;
  int high = maxAndSum(arr, n).second;


  while(low<=high) {
    int mid =(low+high)/2;
    int numberOfStudents = countOfStudents(arr, mid,  n);
    if(numberOfStudents > m ) {
        low=mid+1;
    }
    else {
        high=mid-1;
    }
  }
  return low;
}
