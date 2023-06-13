class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_ele, count = 0;
        for(int i : nums){
            if(count == 0) maj_ele = i;
            else if(i != maj_ele) count-=2;
            count++;
        }
        return maj_ele;
    }
};
