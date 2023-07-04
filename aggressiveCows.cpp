bool isPossible(vector<int>&stalls ,int dist , int k) {
    int countCows=1;
    int coord=stalls[0];
    // start from the second stall since you placed the first stall
    // already.
    for(int i=1;i<stalls.size();i++) {
        // now check if the dist between the current stall and the 
        // previous stall have a dist bigger or equal to dist.
        if( (stalls[i]-coord) >= dist ) {
            coord = stalls[i];
            countCows++;
            // now you have placed a new cow
        }
        
    }
    // now you want to check if you have placed all the cows 
    if(countCows>=k) {
            return true;
        }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n =stalls.size();
    //    Write your code here.
    sort(stalls.begin() , stalls.end());
    // you need to know the maximum distance you can have two cows.
    // since the array is sorted the max is the last and min is the firdst
    int maxDist = stalls[n-1]-stalls[0];

    
    int low =1 ;
    int high = maxDist;
    while(low<=high) {
        int mid=(low+high)/2;
        if(isPossible(stalls , mid , k)) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }

    }
    return high;

}
