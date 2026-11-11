class Solution {
public:
    string optimalDivision(vector<int>& nums) {

        int n = nums.size();

        // Case 1: Only one number
        if (n == 1) {
            return to_string(nums[0]);
        }

        // Case 2: Two numbers
        if (n == 2) {
            return to_string(nums[0]) + "/" +
                   to_string(nums[1]);
        }

        // Case 3: Three or more numbers
        string ans = to_string(nums[0]) + "/(";

        for (int i = 1; i < n; i++) {
            ans += to_string(nums[i]);

            if (i != n - 1) {
                ans += "/";
            }
        }

        ans += ")";

        return ans;
    }
};