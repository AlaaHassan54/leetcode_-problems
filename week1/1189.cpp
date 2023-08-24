class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=0;i<text.length();i++)
        {if(text[i]=='b')c1++;
        else if(text[i]=='a')c2++;
        else if(text[i]=='l')c3++;
        else if(text[i]=='o')c4++;
        else if(text[i]=='n')c5++;
        }
    c3/=2;c4/=2;
    int arr[5]={c1,c2,c3,c4,c5} ;   
    return *min_element(arr,arr+5);
    }
};//b   1
//  a    1
//  l   2
//o     2
//n     1