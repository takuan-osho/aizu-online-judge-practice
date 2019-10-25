#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 初期化
    int A[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    int b[100];
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int c[100];
    for(int i = 0; i < n; i++) {
        c[i] = 0;
        for(int j = 0; j < m; j++) {
            c[i] += A[i][j] * b[j];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << c[i] << endl;
    }
}
