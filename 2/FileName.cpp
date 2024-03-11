#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicateValues(const vector<vector<int>>& matrix) {
    unordered_set<int> seen;

    for (const auto& row : matrix) {
        for (int num : row) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (hasDuplicateValues(matrix)) {
        cout << "Matrix has duplicate values.\n";
    }
    else {
        cout << "Matrix doesn't have duplicate values.\n";
    }

    return 0;
}