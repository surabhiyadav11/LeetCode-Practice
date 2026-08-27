
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) return false;

        int temp = x;       
        long reverse_no = 0;   

        while (x > 0) {
            int digit = x % 10;                 
            reverse_no = (reverse_no * 10) + digit; 
            x = x / 10;                       
        }

        return temp == reverse_no;
    }
};
