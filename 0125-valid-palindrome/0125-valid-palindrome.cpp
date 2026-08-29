class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;

        for(char c : s)
        {
            if(isalnum(c))
            {
                cleaned +=tolower(c);
            }
        }
    
    string reverse(cleaned.rbegin(), cleaned.rend());
    return cleaned == reverse;        
    }
};