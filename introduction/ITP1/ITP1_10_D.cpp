#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, x[100], y[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double distance[4];
    for (int i = 0; i < 4; i++) {
        distance[i] = 0.0;
    }

    for (int p = 1; p <= 3; p++) {
        for (int i = 0; i < n; i++) {
            distance[p] += pow(fabs(x[i] - y[i]), p);
        }
        distance[p] = pow(distance[p], 1.0 / p);
    }

    for (int i = 0; i < n; i++) {
        if (distance[0] < fabs(x[i] - y[i])) {
            distance[0] = fabs(x[i] - y[i]);
        }
    }

    printf("%lf\n", distance[1]);
    printf("%lf\n", distance[2]);
    printf("%lf\n", distance[3]);
    printf("%lf\n", distance[0]);

    return 0;
}
