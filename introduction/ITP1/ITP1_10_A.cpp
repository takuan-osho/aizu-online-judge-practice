#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("%lf\n", result);
    return 0;
}
