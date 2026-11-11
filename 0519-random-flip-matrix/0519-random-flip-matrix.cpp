class Solution {
private:
    int cols;
    int total;
    int remaining;

    unordered_map<int, int> remap;
    mt19937 gen{random_device{}()};

public:
    Solution(int m, int n) {
        cols = n;
        total = m * n;
        remaining = total;
    }

    vector<int> flip() {
        // Choose a random available index
        uniform_int_distribution<int> dist(0, remaining - 1);

        int r = dist(gen);

        int last = remaining - 1;

        // Get the actual index represented by r
        int selected = remap.count(r) ? remap[r] : r;

        // Get the actual index represented by last
        int lastValue = remap.count(last) ? remap[last] : last;

        // Replace selected position with the last available position
        if (r != last) {
            remap[r] = lastValue;
        }

        remap.erase(last);

        remaining--;

        // Convert 1D index into 2D coordinates
        return {selected / cols, selected % cols};
    }

    void reset() {
        remap.clear();
        remaining = total;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */