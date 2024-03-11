#include <iostream>
#include <vector>

using namespace std;

int findRowWithMaxSum(const vector<vector<int>>& matrix) {
    int maxRow = 0;
    int maxSum = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        int sum = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            sum += matrix[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    return maxRow;
}

int main() {
 
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} };

    int rowWithMaxSum = findRowWithMaxSum(matrix);

    cout << "Row with the maximum sum of elements: " << rowWithMaxSum + 1 << endl;

    return 0;
}