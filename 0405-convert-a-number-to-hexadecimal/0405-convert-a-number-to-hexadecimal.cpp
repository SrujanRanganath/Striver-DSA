class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";

        string hex = "0123456789abcdef";
        string ans = "";

        while (num != 0) {
            int digit = num & 15;
            ans += hex[digit];

            num = (unsigned int)num >> 4;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};