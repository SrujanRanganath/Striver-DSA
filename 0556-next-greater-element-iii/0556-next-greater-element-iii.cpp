class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);

        int i = s.size() - 2;

        // Step 1: Find the pivot
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        // No greater permutation exists
        if (i < 0) {
            return -1;
        }

        // Step 2: Find the next greater digit
        int j = s.size() - 1;

        while (s[j] <= s[i]) {
            j--;
        }

        // Step 3: Swap
        swap(s[i], s[j]);

        // Step 4: Reverse the suffix
        reverse(s.begin() + i + 1, s.end());

        // Check 32-bit integer overflow
        long long ans = stoll(s);

        if (ans > INT_MAX) {
            return -1;
        }

        return (int)ans;
    }
};