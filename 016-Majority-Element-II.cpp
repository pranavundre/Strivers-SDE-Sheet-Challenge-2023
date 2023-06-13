class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0, e1 = -1, e2 = -1;
        for(int i : nums){
            if(i == e1) c1++;
            else if(i == e2) c2++;
            else if(c1 == 0){
                e1 = i;
                c1++;
            }
            else if(c2 == 0){
                e2 = i;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1 = c2 = 0;
        for(int i : nums){
            if(i == e1) c1++;
            else if(i == e2) c2++;
        }
        vector<int> res;
        if(c1 > nums.size()/3) res.push_back(e1);
        if(c2 > nums.size()/3) res.push_back(e2);

        return res;
    }
};
