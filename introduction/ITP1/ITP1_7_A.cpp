#include <iostream>
using namespace std;

int main() {
    int m, f, r;

    while (true) {
        cin >> m >> f >> r;

        if (m == -1 && f == -1 && r == -1) {
            break;
        }

        if (m == -1 || f == -1) {
            cout << "F" << endl;
            continue;
        }

        int p = m + f; // 中間と期末の合計点数

        if (p >= 80) {
            cout << "A" << endl;
            continue;
        }

        if (65 <= p && p < 80) {
            cout << "B" << endl;
            continue;
        }

        if (50 <= p && p < 65) {
            cout << "C" << endl;
            continue;
        }

        if (30 <= p && p < 50) {
            if (r >= 50) {
                cout << "C" << endl;
            } else {
                cout << "D" << endl;
            }
            continue;
        }

        if (p < 30) {
            cout << "F" << endl;
        }
    }
    return 0;
}
