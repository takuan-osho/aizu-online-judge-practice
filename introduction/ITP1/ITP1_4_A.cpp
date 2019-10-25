#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    int d;
    int r;
    double f;

    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = (double)a / (double)b;
    printf("%d %d %f\n", d, r, f);
}
