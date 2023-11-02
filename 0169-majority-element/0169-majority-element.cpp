class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int max = 0, maxnum = 0;
        for(auto i:mpp)
        {
            if(max < i.second)
            {
                max = i.second;
                maxnum = i.first;
            }
        }
        return maxnum;
    }
};