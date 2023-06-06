int maximumProfit(vector<int> &prices){
    int buy = INT_MAX, profit = 0;
    for(int prc : prices){
        buy = min(buy, prc);
        profit = max(profit, prc-buy);
    }
    return profit;
}
