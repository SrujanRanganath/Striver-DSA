#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print the number pattern
    void pattern3(int N) {
        // Outer loop for rows
        for (int i = 1; i <= N; i++) {
            // Inner loop for columns
            // Print numbers from 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            // Move to the next row
            cout << endl;
        }
    }
};

int main() {
    // Create object of Solution class
    Solution sol;

    // Define size of pattern
    int N = 5;

    // Call pattern function
    sol.pattern3(N);

    return 0;
}