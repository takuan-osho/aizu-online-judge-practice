#include <iostream>
using namespace std;

bool hasThree(int x) {
    while(x) {
        if(x % 10 == 3) {
            return true;
        }
        x /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || hasThree(i)) {
            cout << " " << i;
        }
    }

    cout << endl;
    return 0;
}
