class Solution {
public:
    int compress(vector<char>& c) {
        int n = c.size();
            int j = 0;
        for(int i = 0 ; i<n;i++)
        {
            char ch = c[i];
            int count = 0;
            while(i<n && c[i]==ch) {
                count++; i++;
            }
            if(count==1) {
                c[j++] = ch;
            }
            else {
                c[j++] = ch;
                string str = to_string(count);
                for(char dig : str) {
                    c[j++] = dig;
                }
            }
            i--;
        }
        c.resize(j);
        return j;
    }
};