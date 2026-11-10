class Solution {
public:
    int findNthDigit(int n) {
        long long digits = 1;
        long long start = 1;
        long long count = 9;

        // Find the group containing the nth digit
        while (n > count * digits) {
            n -= count * digits;
            digits++;
            start *= 10;
            count *= 10;
        }

        // Find the actual number
        long long number = start + (n - 1) / digits;

        // Find the digit position
        int index = (n - 1) % digits;

        string s = to_string(number);

        return s[index] - '0';
    }
};