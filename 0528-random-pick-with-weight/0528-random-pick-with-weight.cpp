class Solution {
private:
    vector<long long> prefix;
    long long total = 0;
    mt19937 gen{random_device{}()};

public:
    Solution(vector<int>& w) {
        for (int weight : w) {
            total += weight;
            prefix.push_back(total);
        }
    }

    int pickIndex() {
        uniform_int_distribution<long long> dist(1, total);

        long long target = dist(gen);

        int index = lower_bound(
            prefix.begin(),
            prefix.end(),
            target
        ) - prefix.begin();

        return index;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */