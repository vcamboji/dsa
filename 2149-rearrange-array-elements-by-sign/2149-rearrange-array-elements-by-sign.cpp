class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = 0, r=0;
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<nums.size(); i++,l++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0,j=0; i<pos.size(),j<neg.size(); i++,j++)
        {
            nums.push_back(pos[i]);
            nums.push_back(neg[j]);
        }
        return nums;
    }
};