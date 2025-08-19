#include <iostream>
#include <vector>
#include <string>

using namespace std;

void detonate(vector<string>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int> > dirs = {{0, 0}, {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 'O') {
                grid[i][j] = '.';

                for (auto& dir : dirs) {
                    int newRow = i + dir[0];
                    int newCol = j + dir[1];

                    if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                        grid[newRow][newCol] = '.';
                    }
                }
            }
        }
    }
}

int main() {
    int rows, cols, n;
    cin >> rows >> cols >> n;

    vector<string> grid(rows);
    for (int i = 0; i < rows; ++i) {
        cin >> grid[i];
    }

    // Simulate bomb placement and detonation
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) { // Every 2nd second, all bombs detonate
            detonate(grid);
        } else if (i > 3) { // Every 4th second, all empty cells become bombs
            for (int j = 0; j < rows; ++j) {
                for (int k = 0; k < cols; ++k) {
                    if (grid[j][k] == '.') {
                        grid[j][k] = 'O';
                    }
                }
            }
        }
    }

    // Print final grid
    for (int i = 0; i < rows; ++i) {
        cout << grid[i] << endl;
    }

    return 0;
}

