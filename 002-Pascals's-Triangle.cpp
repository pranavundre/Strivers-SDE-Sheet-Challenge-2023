vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> res;
    res.push_back({1});
    for(int i = 2; i <= n; i++){
        vector<long long int> temp(i);
        temp[0] = temp[i-1] = 1;
        for(int j = 1; j < i-1; j++) temp[j] = res[i-2][j-1] + res[i-2][j];
        res.emplace_back(temp);
    }
    return res;
}
