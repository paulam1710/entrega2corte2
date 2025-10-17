#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows <= 0) return res;

        res.reserve(numRows);
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1, 1);          // extremos en 1
            for (int j = 1; j < i; ++j)         // rellena con suma de dos de arriba
                row[j] = res[i - 1][j - 1] + res[i - 1][j];
            res.push_back(std::move(row));
        }
        return res;
    }
};

int main() {
    int n;
    cout << "Cuantas filas? ";
    if (!(cin >> n)) return 0;

    Solution s;
    auto tri = s.generate(n);

    for (const auto& row : tri) {
        for (int x : row) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}


