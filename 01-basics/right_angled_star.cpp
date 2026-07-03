#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print Pattern 2
    void pattern2(int N) {
        // Loop for rows
        for (int i = 0; i < N; i++) {
            // Loop for columns (stars in each row)
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            // Move to next line after each row
            cout << endl;
        }
    }
};

int main() {
    // Create solution object
    Solution sol;
    // Define N
    int N = 5;
    // Call pattern function
    sol.pattern2(N);
    return 0;
}
