class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool a = false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                a=true;
            }
        }
    return a;
    }
};
