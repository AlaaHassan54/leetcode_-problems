class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {int temp;
            if(nums[j]<nums[i]){temp=nums[i];nums[i]=nums[j];nums[j]=temp;}}
        }
    }
};