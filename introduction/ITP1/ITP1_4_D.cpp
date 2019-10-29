#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    int minValue = 1000000;
    int maxValue = -1000000;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;

        minValue = (a < minValue) ? a : minValue;
        maxValue = (a > maxValue) ? a : maxValue;

        sum += a;
    }

    cout << minValue << " " << maxValue << " " << sum << endl;
    return 0;
}
