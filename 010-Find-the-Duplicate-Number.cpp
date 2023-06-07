class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int a = 0;
        while(nums[a] != -1){
            int nextInd = nums[a];
            nums[a] = -1;
            a = nextInd;
        }
        return a;
    }
};
