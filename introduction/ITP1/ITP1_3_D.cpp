#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int count = 0;
    cin >> a >> b >> c;

    for (int x = a; x <= b; x++) {
        if (c % x == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
