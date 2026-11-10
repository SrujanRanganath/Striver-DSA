class Solution {
private:
    vector<vector<int>> rectangles;
    vector<long long> prefix;
    mt19937 rng{random_device{}()};

public:
    Solution(vector<vector<int>>& rects) {
        rectangles = rects;

        long long total = 0;

        for (auto& r : rectangles) {
            long long points =
                (long long)(r[2] - r[0] + 1) *
                (r[3] - r[1] + 1);

            total += points;
            prefix.push_back(total);
        }
    }

    vector<int> pick() {
        long long total = prefix.back();

        uniform_int_distribution<long long> dist(1, total);

        long long randomPoint = dist(rng);

        // Find the rectangle
        int index = lower_bound(
            prefix.begin(),
            prefix.end(),
            randomPoint
        ) - prefix.begin();

        auto& r = rectangles[index];

        // Generate random coordinates
        uniform_int_distribution<int> xDist(r[0], r[2]);
        uniform_int_distribution<int> yDist(r[1], r[3]);

        int x = xDist(rng);
        int y = yDist(rng);

        return {x, y};
    }
};