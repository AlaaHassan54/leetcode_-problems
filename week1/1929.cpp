class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s=2*nums.size();
        vector<int>ans(s);
        int j=0;
        for(int i=0;i<s;i++)
        {if(j==(s/2))j=0;
            ans[i]=nums[j];
        j++;

        }return ans;
    }
};