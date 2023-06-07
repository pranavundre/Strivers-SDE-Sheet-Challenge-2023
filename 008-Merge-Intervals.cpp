class Solution {
public:
    static bool sortcol(const vector<int>& a, const vector<int>& b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), sortcol);
        vector<vector<int>> res;
        vector<int> temp = intervals[0];
        for(auto inter : intervals){
            if(inter[0] <= temp[1]) temp[1] = max(temp[1], inter[1]);
            else{
                res.emplace_back(temp);
                temp = inter;
            }
        }
        res.emplace_back(temp);
        return res;
    }
};
