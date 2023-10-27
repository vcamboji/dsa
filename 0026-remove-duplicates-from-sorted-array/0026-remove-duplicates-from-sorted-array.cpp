class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(auto it:s)
        {
            nums.push_back(it);
        }
        k=nums.size();
        return k;
    }
};