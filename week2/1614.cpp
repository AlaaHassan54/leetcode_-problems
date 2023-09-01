class Solution {
public:
    int maxDepth(string s) {
        int ma=0,c=0;
        for(int i=0;i<s.length();i++)
        {if(s[i]=='(')c++;
        if(s[i]==')'){ma=max(ma,c);c--;}

        }return ma;
    }
};
