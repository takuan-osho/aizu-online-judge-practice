#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int sum = 0;
        int points[n];

        for (int i = 0; i < n; i++) {
            cin >> points[i];
            sum += points[i];
        }

        double m = 1.0 * sum / n;
        double dist = 0.0;

        for (int i = 0; i < n; i++) {
            dist += (m - points[i]) * (m - points[i]);
        }

        double stdDeviation = sqrt(dist / n);
        printf("%lf\n", stdDeviation);
    }
}
