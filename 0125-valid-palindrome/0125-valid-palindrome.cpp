class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // Skip non-alphanumeric characters
            if (!isalnum(s[left])) {
                left++;
            }
            else if (!isalnum(s[right])) {
                right--;
            }
            else {
                // Compare characters ignoring case
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }

                left++;
                right--;
            }
        }

        return true;
    }
};