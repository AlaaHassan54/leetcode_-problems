class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        char c;int fl=0,res=0;
        for(int i=0;i<s.length();i++)
        {freq[(int)s[i]-97]++;}
        for(int i=0;i<s.length();i++)
      if(freq[(int)s[i]-97]==1){fl=1;res=i;break;}
        if(fl)return res;
        else return -1;
    }
};