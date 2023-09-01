class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int max=0,fl=0;
        for(int i=0;i<nums1.size();i++)
        {for(int j=0;j<nums2.size();j++)
        {if(nums1[i]==nums2[j])
        {fl=0;
            for(int k=j;k<nums2.size();k++)
       {max=nums2[j];
           if(nums2[k]>max){max=nums2[k];fl=1;break;}           }
           if(fl)
           ans.push_back(max);
           else ans.push_back(-1);
            }             }         }
return ans;
        
    }
};