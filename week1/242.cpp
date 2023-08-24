class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        int fl=1;
       if(s.length()==t.length())
       {for(int i=0;i<s.length();i++)
       if(s[i]!=t[i]){fl=0;break;}
       if(fl)return true;
       else return false;
       }else return false;
    }
};  //a
    //ab