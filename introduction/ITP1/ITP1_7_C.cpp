#include <iostream>
using namespace std;

int main() {
    int r, c;
    int matrix[101][101];
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i <= r; i++) {
        matrix[i][c] = 0;
    }
    for (int j = 0; j <= c; j++) {
        matrix[r][j] = 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][c] += matrix[i][j];
            matrix[r][j] += matrix[i][j];
            matrix[r][c] += matrix[i][j];
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (j) {
                cout << " ";
            }
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}