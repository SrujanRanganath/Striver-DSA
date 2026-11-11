class Solution {
public:

    // Convert a prefix into a palindrome
    long long makePalindrome(long long left, int len) {

        string s = to_string(left);
        string ans = s;

        int i;

        if (len % 2 == 0) {
            i = s.size() - 1;
        }
        else {
            i = s.size() - 2;
        }

        while (i >= 0) {
            ans += s[i];
            i--;
        }

        return stoll(ans);
    }

    string nearestPalindromic(string n) {

        int len = n.size();

        long long original = stoll(n);

        // Extract the first half
        int half = (len + 1) / 2;

        long long prefix = stoll(n.substr(0, half));

        // Store possible palindrome candidates
        set<long long> candidates;

        // Generate three palindrome candidates
        candidates.insert(makePalindrome(prefix - 1, len));
        candidates.insert(makePalindrome(prefix, len));
        candidates.insert(makePalindrome(prefix + 1, len));

        // Boundary candidates
        candidates.insert((long long)pow(10, len - 1) - 1);
        candidates.insert((long long)pow(10, len) + 1);

        long long ans = -1;
        long long minDiff = LLONG_MAX;

        // Find the closest palindrome
        for (long long candidate : candidates) {

            if (candidate == original) {
                continue;
            }

            long long diff = abs(candidate - original);

            if (diff < minDiff ||
                (diff == minDiff && candidate < ans)) {

                minDiff = diff;
                ans = candidate;
            }
        }

        return to_string(ans);
    }
};