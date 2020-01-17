#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, C;
    cin >> a >> b >> C;

    double S, L, h, c, rad;
    double PI = acos(-1);
    rad = (C * PI) / 180.0;

    S = (a * b * sin(rad)) / 2.0;
    c = sqrt((a * a) + (b * b) - (2 * a * b * cos(rad)));
    L = a + b + c;
    h = b * sin(rad);
    printf("%lf\n%lf\n%lf\n", S, L, h);
}
