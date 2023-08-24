class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c=0,j=0;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i=0;i<magazine.length();i++)
{
         if(magazine[i]==ransomNote[j])
          {j++;c++;} //c=2
          
}
if(c==ransomNote.length())
return true;
else return false;
    }
};