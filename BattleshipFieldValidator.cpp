#include <iostream>
#include <vector>

using namespace std;

int f(int i, int j, vector<vector<int>> field) {
    if (i < 0 || j < 0 || i > 9 || j > 9)return 0;
    else return field[i][j];
}

bool validate_battlefield(vector<vector<int>> field) {
    int arr[] = {10, 0, 0, 0, 0};
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (f(i, j, field)) {
                if (f(i - 1, j - 1, field) || f(i - 1, j + 1, field)) return false;
                if (f(i - 1, j, field) && f(i, j - 1, field)) return false;
                if ((field[i][j] += f(i - 1, j, field) + f(i, j - 1, field)) > 4) return false;
                arr[field[i][j]]++;
                arr[field[i][j] - 1]--;
            }
        }
    }
    return (arr[0] == 0 && arr[1] == 4 && arr[2] == 3 && arr[3] == 2 && arr[4] == 1);
}
