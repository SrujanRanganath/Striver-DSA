class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        // Convert time strings into minutes
        for (string t : timePoints) {
            int h = stoi(t.substr(0, 2));
            int m = stoi(t.substr(3, 2));

            minutes.push_back(h * 60 + m);
        }

        // Sort the times
        sort(minutes.begin(), minutes.end());

        int ans = INT_MAX;

        // Check differences between adjacent times
        for (int i = 1; i < minutes.size(); i++) {
            ans = min(ans, minutes[i] - minutes[i - 1]);
        }

        // Check circular difference across midnight
        int circular = 1440 - minutes.back() + minutes.front();

        ans = min(ans, circular);

        return ans;
    }
};