class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0, maxLen = 1;

        // check each possible center
        for (int center = 0; center < n; center++) {
            // odd length palindrome (like "aba")
            int l = center, r = center;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if ((r - l + 1) > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--; r++;
            }

            // even length palindrome (like "abba")
            l = center; r = center + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if ((r - l + 1) > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--; r++;
            }
        }

        return s.substr(start, maxLen);
    }
};
