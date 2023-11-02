class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.begin()+nums.size());
        return nums;
    }
};