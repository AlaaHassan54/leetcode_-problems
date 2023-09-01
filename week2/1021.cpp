class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>c;
        string res;int k=0;
        for(int i=0;i<s.length();i++)
        {if(s[i]=='(')
        {c.push('(');k++;if(k>1)res+='(';}
        else {c.pop();if(!c.empty())res+=')';else k=0;}
        }
return res;

        
    }
};