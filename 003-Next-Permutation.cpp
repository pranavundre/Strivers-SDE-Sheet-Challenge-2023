vector<int> nextPermutation(vector<int> &permutation, int n){
    int i = n;
    while(--i > 0){
        if(permutation[i] > permutation[i-1]) break;
    }
    
    if(i == 0) {
        sort(permutation.begin(), permutation.end());
        return permutation;    
    }

    int k = i-1;
    while(i < n) {
        if(permutation[i] > permutation[k]) i++;
        else break;
    }

    swap(permutation[i-1], permutation[k]);
    sort(permutation.begin() + k + 1, permutation.end());

    return permutation; 
}
