class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unordered_map<int, int> um;
        int max_1 = 0;
        for(auto it:nums)
        {
            if(it == 0)
            {
                um[1] = 0;
            }
            else
            {
                if(max_1 <= um[1]++)
                {
                    max_1 = um[1];
                }
            } 
        }
        return max_1;
    }
};