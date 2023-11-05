class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int prefix = 1, suffix = 1;
        int mazprod = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[nums.size()-i-1];
            mazprod = max(mazprod,max(prefix,suffix));
        }
        return mazprod;
    }
};