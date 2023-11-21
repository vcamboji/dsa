class Solution {
public:
    int bin(vector<int>& nums, int target, int s, int e)
    {
        if(s>e)
            return -1;
        int mid = (s+e)/2;
        if(nums[mid] == target)
            return mid;
        else
        {
            return bin(nums,target,nums[mid]<target? s=mid+1 : s=s, nums[mid]>target? e=mid-1 : e=e);
        }
        
    }
    
    int search(vector<int>& nums, int target) {
                  
        int low = 0;
        int high = nums.size()-1;
        return bin(nums,target,low,high);
    }
};