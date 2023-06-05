long long maxSubarraySum(int arr[], int n){
    long long maxSum = 0, sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < 0) sum = 0;
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
