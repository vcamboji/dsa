class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int x;
        for(int i=0; i<nums.size(); i++)
        {
            x=target-nums[i];
            if(mp.count(x))
            {
                return {i,mp[x]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};