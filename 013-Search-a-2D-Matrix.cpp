class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = (m*n)-1;
        while(l <= r){
            int mid = (l+r)>>1;
            int mr = mid/n, mc = mid%n;
            if(matrix[mr][mc] == target) return true;
            if(matrix[mr][mc] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
