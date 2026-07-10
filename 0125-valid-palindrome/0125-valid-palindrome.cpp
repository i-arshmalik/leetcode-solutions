class Solution {
public:

    bool isAlphaNum(char ch)
    {
        if( 65<= ch && ch <=90 || 97<=ch && ch<=122 || '0'<= ch && ch <= '9')
        {
            return true;
        }
        else return false;
    }
    bool isPalindrome(string s) {
        int i = 0 , j = s.length() - 1 ;
        while(i<j) {
            if(!isAlphaNum(s[i]))
            {
                i++; continue;
            }
            if(!isAlphaNum(s[j]))
            {
                j--; continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            i++; j--;
        }
        return true;
    }
};